/*
===========================================================================

Return to Castle Wolfenstein single player GPL Source Code
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.

This file is part of the Return to Castle Wolfenstein single player GPL Source Code (RTCW SP Source Code).

RTCW SP Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

RTCW SP Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with RTCW SP Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the RTCW SP Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the RTCW SP Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

/*
 * name:		bg_misc.c
 *
 * desc:		both games misc functions, all completely stateless
 *
*/


#include "q_shared.h"
#include "bg_public.h"


#ifdef CGAMEDLL
extern vmCvar_t cg_gameType;
#endif
#ifdef GAMEDLL
extern vmCvar_t g_gametype;
#endif


// NOTE: weapons that share ammo (ex. colt/thompson) need to share max ammo, but not necessarily uses or max clip
#define MAX_AMMO_45     300
#define MAX_AMMO_9MM    300
#define MAX_AMMO_VENOM  1000
#define MAX_AMMO_MAUSER 200
#define MAX_AMMO_GARAND 10
#define MAX_AMMO_FG42   MAX_AMMO_MAUSER
#define MAX_AMMO_BAR    200


// these defines are matched with the character torso animations
#define DELAY_LOW       100 // machineguns, tesla, spear, flame
#define DELAY_HIGH      100 // mauser, garand
#define DELAY_PISTOL    100 // colt, luger, sp5, cross
#define DELAY_SHOULDER  50  // rl
#define DELAY_THROW     250 // grenades, dynamite

// [0] = maxammo		-	max player ammo carrying capacity.
// [1] = uses			-	how many 'rounds' it takes/costs to fire one cycle.
// [2] = maxclip		-	max 'rounds' in a clip.
// [3] = reloadTime		-	time from start of reload until ready to fire.
// [4] = fireDelayTime	-	time from pressing 'fire' until first shot is fired. (used for delaying fire while weapon is 'readied' in animation)
// [5] = nextShotTime	-	when firing continuously, this is the time between shots
// [6] = maxHeat		-	max active firing time before weapon 'overheats' (at which point the weapon will fail for a moment)
// [7] = coolRate		-	how fast the weapon cools down.
// [8] = mod			-	means of death

// potential inclusions in the table:
// damage			-
// splashDamage		-
// soundRange		-	distance which ai can hear the weapon
// ammoWarning		-	amount we give the player a 'low on ammo' warning (just a HUD color change or something)
// clipWarning		-	amount we give the player a 'low in clip' warning (just a HUD color change or something)
// maxclip2			-	allow the player to (mod/powerup) upgrade clip size when aplicable (luger has 8 round standard clip and 32 round snail magazine, for ex.)
//
//
//

ammotable_t ammoTable[] = {
	//	MAX				USES	MAX		RELOAD	FIRE			NEXT	HEAT,	COOL,	MOD,	...
	//	AMMO			AMT.	CLIP	TIME	DELAY			SHOT
	{   0,              0,      0,      0,      50,             0,      0,      0,      0                       },  //	WP_NONE					// 0

	{   999,            0,      999,    0,      50,             200,    0,      0,      MOD_KNIFE               },  //	WP_KNIFE				// 1

	{   MAX_AMMO_9MM,   1,      8,      1500,   DELAY_PISTOL,   400,    0,      0,      MOD_LUGER               },  //	WP_LUGER				// 2	// NOTE: also 32 round 'snail' magazine
	{   MAX_AMMO_9MM,   1,      32,     2600,   DELAY_LOW,      100,    0,      0,      MOD_MP40                },  //	WP_MP40					// 3
	{   MAX_AMMO_MAUSER,1,      10,     2500,   DELAY_HIGH,     1200,   0,      0,      MOD_MAUSER              },  //	WP_MAUSER				// 4	// NOTE: authentic clips are 5/10/25 rounds
	{   MAX_AMMO_FG42,  1,      20,     2000,   DELAY_LOW,      200,    0,      0,      MOD_FG42                },  //	WP_FG42					// 5
	{   15,             1,      15,     1000,   DELAY_THROW,    1600,   0,      0,      MOD_GRENADE_LAUNCHER    },  //	WP_GRENADE_LAUNCHER		// 6
	{   5,              1,      1,      1000,   DELAY_SHOULDER, 2000,   0,      0,      MOD_PANZERFAUST         },  //	WP_PANZERFAUST			// 7
//	{	MAX_AMMO_VENOM,	1,		500,	3000,	750,			30,		5000,	200,	MOD_VENOM				},	//	WP_VENOM				// -
	{   MAX_AMMO_VENOM, 1,      500,    3000,   750,            45,     5000,   200,    MOD_VENOM               },  //	WP_VENOM				// 8	// JPW NOTE: changed next_shot 50->45 to genlock firing to every server frame (fire rate shouldn't be framerate dependent now)
	{   150,            1,      150,    1000,   DELAY_LOW,      50,     0,      0,      MOD_FLAMETHROWER        },  //	WP_FLAMETHROWER			// 9
	{   300,            1,      300,    1000,   DELAY_LOW,      0,      0,      0,      MOD_TESLA               },  //	WP_TESLA				// 10
//	{	50,				1,		50,		1000,	DELAY_LOW,		1200,	0,		0,		MOD_SPEARGUN			},	//	WP_SPEARGUN				// 11

//	{	999,			0,		999,	0,		50,				200,	0,		0,		MOD_KNIFE2				},	//	WP_KNIFE2				// 12
	{   MAX_AMMO_45,    1,      8,      1500,   DELAY_PISTOL,   400,    0,      0,      MOD_COLT                },  //	WP_COLT					// 13
	{   MAX_AMMO_45,    1,      30,     2400,   DELAY_LOW,      120,    0,      0,      MOD_THOMPSON            },  //	WP_THOMPSON				// 14	// NOTE: also 50 round drum magazine
	{   MAX_AMMO_GARAND,1,      5,      2500,   DELAY_HIGH,     1200,   0,      0,      MOD_GARAND              },  //	WP_GARAND				// 15	// NOTE: always 5 round clips
//	{	MAX_AMMO_BAR,	1,		20,		2000,	DELAY_LOW,		200,	0,		0,		MOD_BAR					},	//	WP_BAR					// 16
	{   15,             1,      15,     1000,   DELAY_THROW,    1600,   0,      0,      MOD_GRENADE_PINEAPPLE   },  //	WP_GRENADE_PINEAPPLE	// 17
//	{	5,				1,		5,		1000,	DELAY_SHOULDER,	1200,	0,		0,		MOD_ROCKET_LAUNCHER		},	//	WP_ROCKET_LAUNCHER		// 18

	{   MAX_AMMO_MAUSER,1,      10,     3000,   0,              1700,   0,      0,      MOD_SNIPERRIFLE         },  //	WP_SNIPER_GER			// 19
	{   MAX_AMMO_GARAND,1,      5,      3000,   0,              1200,   0,      0,      MOD_SNOOPERSCOPE        },  //	WP_SNIPER_AM			// 20
//	{	MAX_AMMO_VENOM,	10,		300,	3000,	1200,			1200,	0,		0,		MOD_VENOM_FULL			},	//	WP_VENOM_FULL			// -
//	{	MAX_AMMO_VENOM,	10,		300,	3000,	1000,			1000,	0,		0,		MOD_VENOM_FULL			},	//	WP_VENOM_FULL			// 21
//	{	20,				1,		20,		1000,	DELAY_LOW,		1200,	0,		0,		MOD_SPEARGUN_CO2		},	//	WP_SPEARGUN_CO2			// 22

	{   MAX_AMMO_FG42,  1,      20,     2000,   DELAY_LOW,      200,    0,      0,      MOD_FG42SCOPE           },  //	WP_FG42SCOPE			// 23
//	{	MAX_AMMO_BAR,	1,		20,		2000,	DELAY_LOW,		90,		0,		0,		MOD_BAR					},	//	WP_BAR2					// 24
	{   MAX_AMMO_9MM,   1,      32,     3100,   DELAY_LOW,      110,    700,    300,    MOD_STEN                },  //	WP_STEN					// 25
	{   MAX_AMMO_9MM,   1,      8,      1500,   DELAY_PISTOL,   400,    0,      0,      MOD_SILENCER            },  //	WP_SILENCER				// 26
	{   MAX_AMMO_45,    1,      8,      2700,   DELAY_PISTOL,   200,    0,      0,      MOD_AKIMBO              },  //	WP_AKIMBO				// 27

	{   999,            0,      999,    0,      50,             0,      0,      0,      0                       },  //	WP_CLASS_SPECIAL		// 28	//	class_special
//	{	100,			1,		100,	1000,	DELAY_PISTOL,	900,	0,		0,		MOD_CROSS				},	//	WP_CROSS				// 29
	{   10,             1,      10,     1000,   DELAY_THROW,    1600,   0,      0,      MOD_DYNAMITE            },  //	WP_DYNAMITE				// 30
//	{	10,				1,		10,		1000,	DELAY_THROW,	1600,	0,		0,		MOD_DYNAMITE			},	//	WP_DYNAMITE2			// 31

// stubs for some "not-real" weapons (so they always return "yes, you have enough ammo for that gauntlet", etc.)
//	{	5,				1,		5,		1000,	DELAY_SHOULDER,	1200,	0,		0,		0 /*mod_prox*/			},	//	WP_PROX					// 32
	{   999,            0,      999,    0,      50,             0,      0,      0,      0                       },  //	WP_MONSTER_ATTACK1		// 33
	{   999,            0,      999,    0,      50,             0,      0,      0,      0                       },  //	WP_MONSTER_ATTACK2		// 34
	{   999,            0,      999,    0,      50,             0,      0,      0,      0                       },  //	WP_MONSTER_ATTACK3		// 35
	{   999,            0,      999,    0,      50,             0,      0,      0,      0                       }   //	WP_GAUNTLET				// 36
};


//----(SA)	moved in here so both games can get to it
int weapAlts[] = {
	WP_NONE,            // 0 WP_NONE
	WP_NONE,            // 1 WP_KNIFE
	WP_SILENCER,        // 2 WP_LUGER
	WP_NONE,            // 3 WP_MP40
	WP_SNIPERRIFLE,     // 4 WP_MAUSER
	WP_FG42SCOPE,       // 5 WP_FG42	// was SP5
	WP_NONE,            // 6 WP_GRENADE_LAUNCHER
	WP_NONE,            // 7 WP_PANZERFAUST
	WP_NONE,            // 8 WP_VENOM
	WP_NONE,            // 9 WP_FLAMETHROWER
	WP_NONE,            // 10 WP_TESLA
//	WP_SPEARGUN_CO2,	// 11 WP_SPEARGUN
//	WP_NONE,			// 12 WP_KNIFE2
	WP_AKIMBO,          // 13 WP_COLT		//----(SA)	new
	WP_NONE,            // 14 WP_THOMPSON
	WP_SNOOPERSCOPE,    // 15 WP_GARAND
//	WP_BAR2,			// 16 WP_BAR		//----(SA)	modified
	WP_NONE,            // 17 WP_GRENADE_PINEAPPLE
//	WP_NONE,			// 18 WP_ROCKET_LAUNCHER
	WP_MAUSER,          // 19 WP_SNIPERRIFLE
	WP_GARAND,          // 20 WP_SNOOPERSCOPE
//	WP_VENOM,			// 21 WP_VENOM_FULL
//	WP_SPEARGUN,		// 22 WP_SPEARGUN_CO2
	WP_FG42,            // 23 WP_FG42SCOPE
//	WP_BAR,				// 24 WP_BAR2		//----(SA)	new
	WP_NONE,            // 25 WP_STEN
	WP_LUGER,           // 26 WP_SILENCER	//----(SA)	was sp5
	WP_COLT,            // 27 WP_AKIMBO		//----(SA)	new
	WP_NONE,            // 28 WP_CLASS_SPECIAL
//	WP_NONE,			// 29 WP_CROSS
	WP_NONE             // 30 WP_DYNAMITE	//----(SA)	modified (not in rotation yet)
//	WP_DYNAMITE			// 31 WP_DYNAMITE2	//----(SA)	new
};


// new (10/18/00)
char *animStrings[] = {
	"BOTH_DEATH1",
	"BOTH_DEAD1",
	"BOTH_DEAD1_WATER",
	"BOTH_DEATH2",
	"BOTH_DEAD2",
	"BOTH_DEAD2_WATER",
	"BOTH_DEATH3",
	"BOTH_DEAD3",
	"BOTH_DEAD3_WATER",

	"BOTH_CLIMB",
	"BOTH_CLIMB_DOWN",
	"BOTH_CLIMB_DISMOUNT",

	"BOTH_SALUTE",

	"BOTH_PAIN1",
	"BOTH_PAIN2",
	"BOTH_PAIN3",
	"BOTH_PAIN4",
	"BOTH_PAIN5",
	"BOTH_PAIN6",
	"BOTH_PAIN7",
	"BOTH_PAIN8",

	"BOTH_GRAB_GRENADE",

	"BOTH_ATTACK1",
	"BOTH_ATTACK2",
	"BOTH_ATTACK3",
	"BOTH_ATTACK4",
	"BOTH_ATTACK5",

	"BOTH_EXTRA1",
	"BOTH_EXTRA2",
	"BOTH_EXTRA3",
	"BOTH_EXTRA4",
	"BOTH_EXTRA5",
	"BOTH_EXTRA6",
	"BOTH_EXTRA7",
	"BOTH_EXTRA8",
	"BOTH_EXTRA9",
	"BOTH_EXTRA10",
	"BOTH_EXTRA11",
	"BOTH_EXTRA12",
	"BOTH_EXTRA13",
	"BOTH_EXTRA14",
	"BOTH_EXTRA15",
	"BOTH_EXTRA16",
	"BOTH_EXTRA17",
	"BOTH_EXTRA18",
	"BOTH_EXTRA19",
	"BOTH_EXTRA20",

	"TORSO_GESTURE",
	"TORSO_GESTURE2",
	"TORSO_GESTURE3",
	"TORSO_GESTURE4",

	"TORSO_DROP",

	"TORSO_RAISE",   // (low)
	"TORSO_ATTACK",
	"TORSO_STAND",
	"TORSO_STAND_ALT1",
	"TORSO_STAND_ALT2",
	"TORSO_READY",
	"TORSO_RELAX",

	"TORSO_RAISE2",  // (high)
	"TORSO_ATTACK2",
	"TORSO_STAND2",
	"TORSO_STAND2_ALT1",
	"TORSO_STAND2_ALT2",
	"TORSO_READY2",
	"TORSO_RELAX2",

	"TORSO_RAISE3",  // (pistol)
	"TORSO_ATTACK3",
	"TORSO_STAND3",
	"TORSO_STAND3_ALT1",
	"TORSO_STAND3_ALT2",
	"TORSO_READY3",
	"TORSO_RELAX3",

	"TORSO_RAISE4",  // (shoulder)
	"TORSO_ATTACK4",
	"TORSO_STAND4",
	"TORSO_STAND4_ALT1",
	"TORSO_STAND4_ALT2",
	"TORSO_READY4",
	"TORSO_RELAX4",

	"TORSO_RAISE5",  // (throw)
	"TORSO_ATTACK5",
	"TORSO_ATTACK5B",
	"TORSO_STAND5",
	"TORSO_STAND5_ALT1",
	"TORSO_STAND5_ALT2",
	"TORSO_READY5",
	"TORSO_RELAX5",

	"TORSO_RELOAD1", // (low)
	"TORSO_RELOAD2", // (high)
	"TORSO_RELOAD3", // (pistol)
	"TORSO_RELOAD4", // (shoulder)

	"TORSO_MG42",        // firing tripod mounted weapon animation

	"TORSO_MOVE",        // torso anim to play while moving and not firing (swinging arms type thing)
	"TORSO_MOVE_ALT",        // torso anim to play while moving and not firing (swinging arms type thing)

	"TORSO_EXTRA",
	"TORSO_EXTRA2",
	"TORSO_EXTRA3",
	"TORSO_EXTRA4",
	"TORSO_EXTRA5",
	"TORSO_EXTRA6",
	"TORSO_EXTRA7",
	"TORSO_EXTRA8",
	"TORSO_EXTRA9",
	"TORSO_EXTRA10",

	"LEGS_WALKCR",
	"LEGS_WALKCR_BACK",
	"LEGS_WALK",
	"LEGS_RUN",
	"LEGS_BACK",
	"LEGS_SWIM",
	"LEGS_SWIM_IDLE",

	"LEGS_JUMP",
	"LEGS_JUMPB",
	"LEGS_LAND",

	"LEGS_IDLE",
	"LEGS_IDLE_ALT", //	"LEGS_IDLE2"
	"LEGS_IDLECR",

	"LEGS_TURN",

	"LEGS_BOOT",     // kicking animation

	"LEGS_EXTRA1",
	"LEGS_EXTRA2",
	"LEGS_EXTRA3",
	"LEGS_EXTRA4",
	"LEGS_EXTRA5",
	"LEGS_EXTRA6",
	"LEGS_EXTRA7",
	"LEGS_EXTRA8",
	"LEGS_EXTRA9",
	"LEGS_EXTRA10",
};


// old
char *animStringsOld[] = {
	"BOTH_DEATH1",
	"BOTH_DEAD1",
	"BOTH_DEATH2",
	"BOTH_DEAD2",
	"BOTH_DEATH3",
	"BOTH_DEAD3",

	"BOTH_CLIMB",
	"BOTH_CLIMB_DOWN",
	"BOTH_CLIMB_DISMOUNT",

	"BOTH_SALUTE",

	"BOTH_PAIN1",
	"BOTH_PAIN2",
	"BOTH_PAIN3",
	"BOTH_PAIN4",
	"BOTH_PAIN5",
	"BOTH_PAIN6",
	"BOTH_PAIN7",
	"BOTH_PAIN8",

	"BOTH_EXTRA1",
	"BOTH_EXTRA2",
	"BOTH_EXTRA3",
	"BOTH_EXTRA4",
	"BOTH_EXTRA5",

	"TORSO_GESTURE",
	"TORSO_GESTURE2",
	"TORSO_GESTURE3",
	"TORSO_GESTURE4",

	"TORSO_DROP",

	"TORSO_RAISE",   // (low)
	"TORSO_ATTACK",
	"TORSO_STAND",
	"TORSO_READY",
	"TORSO_RELAX",

	"TORSO_RAISE2",  // (high)
	"TORSO_ATTACK2",
	"TORSO_STAND2",
	"TORSO_READY2",
	"TORSO_RELAX2",

	"TORSO_RAISE3",  // (pistol)
	"TORSO_ATTACK3",
	"TORSO_STAND3",
	"TORSO_READY3",
	"TORSO_RELAX3",

	"TORSO_RAISE4",  // (shoulder)
	"TORSO_ATTACK4",
	"TORSO_STAND4",
	"TORSO_READY4",
	"TORSO_RELAX4",

	"TORSO_RAISE5",  // (throw)
	"TORSO_ATTACK5",
	"TORSO_ATTACK5B",
	"TORSO_STAND5",
	"TORSO_READY5",
	"TORSO_RELAX5",

	"TORSO_RELOAD1", // (low)
	"TORSO_RELOAD2", // (high)
	"TORSO_RELOAD3", // (pistol)
	"TORSO_RELOAD4", // (shoulder)

	"TORSO_MG42",        // firing tripod mounted weapon animation

	"TORSO_MOVE",        // torso anim to play while moving and not firing (swinging arms type thing)

	"TORSO_EXTRA2",
	"TORSO_EXTRA3",
	"TORSO_EXTRA4",
	"TORSO_EXTRA5",

	"LEGS_WALKCR",
	"LEGS_WALKCR_BACK",
	"LEGS_WALK",
	"LEGS_RUN",
	"LEGS_BACK",
	"LEGS_SWIM",

	"LEGS_JUMP",
	"LEGS_LAND",

	"LEGS_IDLE",
	"LEGS_IDLE2",
	"LEGS_IDLECR",

	"LEGS_TURN",

	"LEGS_BOOT",     // kicking animation

	"LEGS_EXTRA1",
	"LEGS_EXTRA2",
	"LEGS_EXTRA3",
	"LEGS_EXTRA4",
	"LEGS_EXTRA5",
};

/*QUAKED item_***** ( 0 0 0 ) (-16 -16 -16) (16 16 16) SUSPENDED SPIN PERSISTANT
DO NOT USE THIS CLASS, IT JUST HOLDS GENERAL INFORMATION.
SUSPENDED - will allow items to hang in the air, otherwise they are dropped to the next surface.
SPIN - will allow items to spin in place.
PERSISTANT - some items (ex. clipboards) can be picked up, but don't disappear

If an item is the target of another entity, it will not spawn in until fired.

An item fires all of its targets when it is picked up.  If the toucher can't carry it, the targets won't be fired.

"notfree" if set to 1, don't spawn in free for all games
"notteam" if set to 1, don't spawn in team games
"notsingle" if set to 1, don't spawn in single player games
"wait"	override the default wait before respawning.  -1 = never respawn automatically, which can be used with targeted spawning.
"random" random number of plus or minus seconds varied from the respawn time
"count" override quantity or duration on most items.
"stand" if the item has a stand (ex: mp40_stand.md3) this specifies which stand tag to attach the weapon to ("stand":"4" would mean "tag_stand4" for example)  only weapons support stands currently
*/

// JOSEPH 5-2-00
//----(SA) the addition of the 'ammotype' field was added by me, not removed by id (SA)
gitem_t bg_itemlist[] =
{
	{
		NULL,
		NULL,
		{ NULL,
		  NULL,
		  0, 0, 0},
		NULL,   // icon
		NULL,   // ammo icon
		NULL,   // pickup
		0,
		0,
		0,
		0,          // ammotype
		0,          // cliptype
		"",          // precache
		"",          // sounds
		{0,0,0,0}
	},  // leave index 0 alone



/*QUAKED item_clipboard (1 1 0) (-8 -8 -8) (8 8 8) SUSPENDED SPIN PERSISTANT
"model" - model to display in the world.  defaults to 'models/powerups/clipboard/clipboard.md3' (the clipboard laying flat is 'clipboard2.md3')
"popup" - menu to popup.  no default since you won't want the same clipboard laying around. (clipboard will display a 'put popup here' message)
"notebookpage" - when clipboard is picked up, this page (menu) will be added to your notebook (FIXME: TODO: more info goes here)

We currently use:
clip_interrogation
clip_codeddispatch
clip_alertstatus

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/clipboard/clipboard.md3"
*/
/*
"scriptName"
*/
	{
		"item_clipboard",
		"sound/pickup/armor/body_pickup.wav",
		{   "models/powerups/clipboard/clipboard.md3",
			0,
			0,
			0, 0 },
		"icons/iconh_small",
		NULL,                   // ammo icon
		"",
		1,
		IT_CLIPBOARD,
		0,
		0,
		0,
		"",
		"",
		{0,0,0,0}
	},

/*QUAKED item_treasure (1 1 0) (-8 -8 -8) (8 8 8) SUSPENDED SPIN
Items the player picks up that are just used to tally a score at end-level
"model" defaults to 'models/powerups/treasure/goldbar.md3'
"noise" sound to play on pickup.  defaults to 'sound/pickup/treasure/gold.wav'
"message" what to call the item when it's picked up.  defaults to "Treasure Item" (SA: temp)
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/treasure/goldbar.md3"
*/
/*
"scriptName"
*/
	{
		"item_treasure",
		"sound/pickup/treasure/gold.wav",
		{   "models/powerups/treasure/goldbar.md3",
			0,
			0,
			0, 0 },
		"icons/iconh_small", // (SA) placeholder
		NULL,                   // ammo icon
		"Treasure Item",     // (SA) placeholder
		5,
		IT_TREASURE,
		0,
		0,
		0,
		"",
		"",
		{0,0,0,0}
	},


	//
	// ARMOR/HEALTH/STAMINA
	//


/*QUAKED item_health_small (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/health/health_s.md3"
*/
	{
		"item_health_small",
		"sound/pickup/health/health_pickup.wav",
		{   "models/powerups/health/health_s.md3",
			0,
			0, 0,  0 },
		"icons/iconh_small",
		NULL,   // ammo icon
		"Small Health",
		5,
		IT_HEALTH,
		0,
		0,
		0,
		"",
		"",
		{10,10,5,5}
	},

/*QUAKED item_health (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/health/health_m.md3"
*/
	{
		"item_health",
		"sound/pickup/health/health_pickup.wav",
		{   "models/powerups/health/health_m.md3",
			0,
			0, 0,  0 },
		"icons/iconh_med",
		NULL,   // ammo icon
		"Med Health",
		25,
		IT_HEALTH,
		0,
		0,
		0,
		"",
		"",
		{25,25,15,15}
	},

/*QUAKED item_health_large (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/health/health_l.md3"
*/
	{
		"item_health_large",
		"sound/pickup/health/health_pickup.wav",
		{   "models/powerups/health/health_l.md3",
			0, 0, 0,   0 },
		"icons/iconh_large",
		NULL,   // ammo icon
		"Large Health",
		50,
		IT_HEALTH,
		0,
		0,
		0,
		"",
		"",
		{50,50,30,20}
	},

/*QUAKED item_health_turkey (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
multi-stage health item.
gives amount on first use based on skill:
skill 1: 50
skill 2: 50
skill 3: 50
skill 4: 40
skill 5: 30

then gives 15 on "finishing up"

player will only eat what he needs.  health at 90, turkey fills up and leaves remains (leaving 15).  health at 5 you eat the whole thing.
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/health/health_t1.md3"
*/
	{
		"item_health_turkey",
		"sound/pickup/health/hot_pickup.wav",
		{   "models/powerups/health/health_t3.md3",  // just plate (should now be destructable)
			"models/powerups/health/health_t2.md3",  // half eaten
			"models/powerups/health/health_t1.md3",  // whole turkey
			0, 0 },
		"icons/iconh_turkey",
		NULL,   // ammo icon
		"Hot Meal",
		15,                 // amount given in last stage
		IT_HEALTH,
		0,
		0,
		0,
		"",
		"",
		{45,35,25,15}   // amount given in first stage based on gameskill level
	},

/*QUAKED item_health_breadandmeat (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
multi-stage health item.
gives amount on first use based on skill:
skill 1: 30
skill 2: 30
skill 3: 30
skill 4: 20
skill 5: 10

then gives 10 on "finishing up"
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/health/health_b1.md3"
*/
	{
		"item_health_breadandmeat",
		"sound/pickup/health/cold_pickup.wav",
		{   "models/powerups/health/health_b3.md3",  // just plate (should now be destructable)
			"models/powerups/health/health_b2.md3",  // half eaten
			"models/powerups/health/health_b1.md3",  // whole turkey
			0, 0 },
		"icons/iconh_breadandmeat",
		NULL,   // ammo icon
		"Cold Meal",
		10,                 // amount given in last stage
		IT_HEALTH,
		0,
		0,
		0,
		"",
		"",
		{30,30,20,15}   // amount given in first stage based on gameskill level
	},

/*QUAKED item_health_wall_box (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED - - RESPAWN
single use health with dual state model.
please set the suspended flag to keep it from falling on the ground
defaults to 50 pts health
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/health/health_wallbox.md3"
*/
	{
		"item_health_wall_box",
		"sound/pickup/health/health_pickup.wav",
		{   "models/powerups/health/health_wallbox2.md3",
			"models/powerups/health/health_wallbox1.md3",
			0, 0, 0},
		"icons/iconh_wall",
		NULL,   // ammo icon
		"Health",
		25,
		IT_HEALTH,
		0,
		0,
		0,
		"",
		"",
		{25,25,25,25}
	},

/*QUAKED item_health_wall (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED - - RESPAWN
defaults to 50 pts health
you will probably want to check the 'suspended' box to keep it from falling to the ground
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/health/health_w.md3"
*/
	{
		"item_health_wall",
		"sound/pickup/health/health_pickup.wav",
		{   "models/powerups/health/health_w.md3",
			0, 0, 0,   0 },
		"icons/iconh_wall",
		NULL,   // ammo icon
		"Health",
		25,
		IT_HEALTH,
		0,
		0,
		0,
		"",
		"",
		{25,25,15,15}
	},

	//
	// STAMINA
	//


/*QUAKED item_stamina_stein (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
defaults to 30 sec stamina boost
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/instant/stamina_stein.md3"
*/

	{
		"item_stamina_stein",
		"sound/pickup/health/stamina_pickup.wav",
		{   "models/powerups/instant/stamina_stein.md3",
			0, 0, 0,   0 },
		"icons/icons_stein",
		NULL,   // ammo icon
		"Stamina",
		25,
		IT_POWERUP,
		PW_NOFATIGUE,
		0,
		0,
		"",
		"",
		{30,25,20,15}
	},


/*QUAKED item_stamina_brandy (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
defaults to 30 sec stamina boost

multi-stage health item.
gives amount on first use based on skill:
skill 1: 50
skill 2: 50
skill 3: 50
skill 4: 40
skill 5: 30

then gives 15 on "finishing up"

player will only eat what he needs.  health at 90, turkey fills up and leaves remains (leaving 15).  health at 5 you eat the whole thing.
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/instant/stamina_brandy1.md3"
*/

	{
		"item_stamina_brandy",
		"sound/sound/pickup/health/stamina_pickup.wav",
		{   "models/powerups/instant/stamina_brandy2.md3",
			"models/powerups/instant/stamina_brandy1.md3",
			0, 0,  0 },
		"icons/icons_brandy",
		NULL,   // ammo icon
		"Stamina",
		25,
		IT_POWERUP,
		PW_NOFATIGUE,
		0,
		0,
		"",
		"",
		{30,25,20,15}
	},


	//
	// ARMOR
	//


/*QUAKED item_armor_body (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/armor/armor_body1.md3"
*/
	{
		"item_armor_body",
		"sound/pickup/armor/body_pickup.wav",
		{   "models/powerups/armor/armor_body1.md3",
			0, 0, 0,   0 },
		"icons/iconr_body",
		NULL,   // ammo icon
		"Flak Jacket",
		75,
		IT_ARMOR,
		0,
		0,
		0,
		"",
		"",
		{75,75,75,75}
	},

/*QUAKED item_armor_body_hang (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED - - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/armor/armor_body2.md3"
*/
	{
		"item_armor_body_hang",
		"sound/pickup/armor/body_pickup.wav",
		{   "models/powerups/armor/armor_body2.md3",
			0, 0, 0,   0 },
		"icons/iconr_bodyh",
		NULL,   // ammo icon
		"Flak Jacket",
		75,
		IT_ARMOR,
		0,
		0,
		0,
		"",
		"",
		{75,75,75,75}
	},

/*QUAKED item_armor_head (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/armor/armor_head1.md3"
*/
	{
		"item_armor_head",
		"sound/pickup/armor/head_pickup.wav",
		{   "models/powerups/armor/armor_head1.md3",
			0, 0, 0,   0 },
		"icons/iconr_head",
		NULL,   // ammo icon
		"Armored Helmet",
		25,
		IT_ARMOR,
		0,
		0,
		0,
		"",
		"",
		{25,25,25,25}
	},



	//
	// WEAPONS
	//

/*
weapon_gauntlet
*/
	{
		"weapon_gauntlet",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/gauntlet/gauntlet.md3",
			0, 0, 0,    0 },
		"",  // icon
		"icons/ammo1",           // ammo icon
		"Gauntlet",              // pickup
		0,
		IT_WEAPON,
		WP_GAUNTLET,
		WP_GAUNTLET,
		WP_GAUNTLET,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},



	// wolf weapons (SA)

/*QUAKED weapon_knife (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/knife/knife.md3"
*/
	{
		"weapon_knife",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/knife/knife.md3",
			"models/weapons2/knife/v_knife.md3",
			"models/weapons2/knife/pu_knife.md3",
			0, 0 },

		"icons/iconw_knife_1",   // icon
		"icons/ammo2",           // ammo icon
		"Knife",             // pickup
		50,
		IT_WEAPON,
		WP_KNIFE,
		WP_KNIFE,
		WP_KNIFE,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},


/* weapon_knife2 (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/knife2/knife2.md3"
*/
/*
	{
		"weapon_knife2",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/knife2/knife2.md3",
			"models/weapons2/knife2/v_knife2.md3",
			"models/weapons2/knife2/pu_knife2.md3",
			0, 0 },

		"icons/iconw_knife2_1",	// icon
		"icons/ammo2",			// ammo icon
		"Other Knife",			// pickup
		50,
		IT_WEAPON,
		WP_KNIFE2,
		WP_KNIFE2,
		WP_KNIFE2,
		"",						// precache
		"",						// sounds
		{0,0,0,0}
	},
*/


/*QUAKED weapon_luger (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/luger/luger.md3"
*/
	{
		"weapon_luger",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/luger/luger.md3",
			"models/weapons2/luger/v_luger.md3",
			"models/weapons2/luger/pu_luger.md3",
			0, 0 },

		"icons/iconw_luger_1",   // icon
		"icons/ammo2",           // ammo icon
		"Luger",             // pickup
		50,
		IT_WEAPON,
		WP_LUGER,
		WP_LUGER,
		WP_LUGER,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},


/*QUAKED weapon_mauserRifle (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/mauser/mauser.md3"
*/
	{
		"weapon_mauserRifle",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/mauser/mauser.md3",
			"models/weapons2/mauser/v_mauser.md3",
			"models/weapons2/mauser/pu_mauser.md3",
			0, 0  },

		"icons/iconw_mauser_1",  // icon
		"icons/ammo3",           // ammo icon
		"Mauser Rifle",          // pickup
		50,
		IT_WEAPON,
		WP_MAUSER,
		WP_MAUSER,
		WP_MAUSER,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},

/*QUAKED weapon_thompson (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/thompson/thompson.md3"
*/
	{
		"weapon_thompson",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/thompson/thompson.md3",
			"models/weapons2/thompson/v_thompson.md3",
			"models/weapons2/thompson/pu_thompson.md3",
			0, 0 },

		"icons/iconw_thompson_1",    // icon
		"icons/ammo2",           // ammo icon
		"Thompson",              // pickup
		30,
		IT_WEAPON,
		WP_THOMPSON,
		WP_COLT,
		WP_THOMPSON,
		"",                  // precache
		"",                  // sounds
		{0,0,0,0}
	},

/*QUAKED weapon_sten (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/sten/sten.md3"
*/
	{
		"weapon_sten",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/sten/sten.md3",
			"models/weapons2/sten/v_sten.md3",
			"models/weapons2/sten/pu_sten.md3",
			0,0 },
		"icons/iconw_sten_1",    // icon
		"icons/ammo2",           // ammo icon
		"Sten",                  // pickup
		30,
		IT_WEAPON,
		WP_STEN,
		WP_LUGER,
		WP_STEN,
		"",                  // precache
		"",                  // sounds
		{0,0,0,0}
	},

/*weapon_akimbo
dual colts
*/
	{
		"weapon_akimbo",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/colt2/colt2.md3",
			"models/weapons2/colt2/v_colt2.md3",
			"models/weapons2/colt2/pu_colt2.md3",
			0, 0 },

		"icons/iconw_colt_1",    // icon
		"icons/ammo2",           // ammo icon
		"Dual Colts",            // pickup
		50,
		IT_WEAPON,
		WP_AKIMBO,
		WP_COLT,
//		WP_COLT,
		WP_AKIMBO,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},

/*QUAKED weapon_colt (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/colt/colt.md3"
*/
	{
		"weapon_colt",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/colt/colt.md3",
			"models/weapons2/colt/v_colt.md3",
			"models/weapons2/colt/pu_colt.md3",
			0, 0 },

		"icons/iconw_colt_1",    // icon
		"icons/ammo2",           // ammo icon
		"Colt",                  // pickup
		50,
		IT_WEAPON,
		WP_COLT,
		WP_COLT,
		WP_COLT,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},


// (SA) snooper is the parent, so 'garand' is no longer available as a stand-alone weap w/ an optional scope
/*
weapon_garandRifle (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/garand/garand.md3"
*/
	{
		"NOT_weapon_garandRifle",    //----(SA)	modified so it can no longer be given individually
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/garand/garand.md3",
			"models/weapons2/garand/v_garand.md3",
			"models/weapons2/garand/pu_garand.md3",
			0, 0 },

		"icons/iconw_garand_1",  // icon
		"icons/ammo3",           // ammo icon
		"",                      // pickup			//----(SA)	modified so it can no longer be given individually
		50,
		IT_WEAPON,
		WP_GARAND,
		WP_GARAND,
		WP_GARAND,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},

/*QUAKED weapon_mp40 (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
"stand" values:
	no value:	laying in a default position on it's side (default)
	2:			upright, barrel pointing up, slightly angled (rack mount)
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models\weapons2\mp40\mp40.md3"
*/
	{
		"weapon_mp40",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/mp40/mp40.md3",
			"models/weapons2/mp40/v_mp40.md3",
			"models/weapons2/mp40/pu_mp40.md3",
			0, 0 },

		"icons/iconw_mp40_1",    // icon
		"icons/ammo2",       // ammo icon
		"MP40",              // pickup
		30,
		IT_WEAPON,
		WP_MP40,
		WP_LUGER,
		WP_MP40,
		"",                  // precache
		"",                  // sounds
		{0,0,0,0}
	},



/*QUAKED weapon_fg42 (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/fg42/fg42.md3"
*/
	{
		"weapon_fg42",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/fg42/fg42.md3",
			"models/weapons2/fg42/v_fg42.md3",
			"models/weapons2/fg42/pu_fg42.md3",
			0, 0 },

		"icons/iconw_fg42_1",    // icon
		"icons/ammo5",          // ammo icon
		"FG42 Paratroop Rifle",      // pickup
		10,
		IT_WEAPON,
		WP_FG42,
		WP_MAUSER,
		WP_FG42,
		"",                  // precache
		"",                  // sounds
		{0,0,0,0}
	},

//----(SA)	added

/* weapon_bar (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/bar/bar.md3"
*/
/*
	{
		"weapon_bar",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/bar/bar.md3",
			"models/weapons2/bar/v_bar.md3",
			"models/weapons2/bar/pu_bar.md3",
			0, 0 },

		"icons/iconw_bar_1",	// icon
			"icons/ammo5",		// ammo icon
		"BAR",		// pickup
		10,
		IT_WEAPON,
		WP_BAR,
		WP_BAR,
		WP_BAR,
		"",					// precache
		"",					// sounds
		{0,0,0,0}
	},

*/
/* weapon_bar2
*/
/*
	{
		"weapon_bar2",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/bar/bar.md3",
			"models/weapons2/bar/v_bar.md3",
			"models/weapons2/bar/pu_bar.md3",
			0, 0 },

		"icons/iconw_bar_1",	// icon
			"icons/ammo5",		// ammo icon
		"BAR",		// pickup
		10,
		IT_WEAPON,
		WP_BAR2,
		WP_BAR,
		WP_BAR,
		"",					// precache
		"",					// sounds
		{0,0,0,0}
	},
*/

//----(SA)	end


//----(SA)	modified sp5 to be silencer mod for luger
/*QUAKED weapon_silencer (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/sp5/sp5.md3"
*/
	{
		"weapon_silencer",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/silencer/silencer.md3", //----(SA)	changed 10/25
			"models/weapons2/silencer/v_silencer.md3",
			"models/weapons2/silencer/pu_silencer.md3",
			0, 0},

		"icons/iconw_silencer_1",    // icon
		"icons/ammo5",       // ammo icon
//		"Silencer",		// pickup
		"sp5 pistol",
		10,
		IT_WEAPON,
		WP_SILENCER,
		WP_LUGER,
		WP_LUGER,
		"",                  // precache
		"",                  // sounds
		{0,0,0,0}
	},

/*QUAKED weapon_panzerfaust (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/panzerfaust/pf.md3"
*/
	{
		"weapon_panzerfaust",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/panzerfaust/pf.md3",
			"models/weapons2/panzerfaust/v_pf.md3",
			"models/weapons2/panzerfaust/pu_pf.md3",
			0, 0 },

		"icons/iconw_panzerfaust_1", // icon
		"icons/ammo6",       // ammo icon
		"Panzerfaust",               // pickup
		1,
		IT_WEAPON,
		WP_PANZERFAUST,
		WP_PANZERFAUST,
		WP_PANZERFAUST,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},

/* weapon_rocketlauncher (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/rocketl/rocketl.md3"
*/
/*
	{
		"weapon_rocketlauncher",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/rocketl/rocketl.md3",
			"models/weapons2/rocketl/v_rocketl.md3",
			"models/weapons2/rocketl/pu_rocketl.md3",
			0, 0 },

		"icons/iconw_rocket_1",	// icon
		"icons/ammo6",		// ammo icon
		"Bazooka",				// pickup
		5,
		IT_WEAPON,
		WP_ROCKET_LAUNCHER,
		WP_ROCKET_LAUNCHER,
		WP_ROCKET_LAUNCHER,
		"",						// precache
		"",						// sounds
		{0,0,0,0}
	},
*/

/* weapon_proxlauncher (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/prox/prox.md3"
*/

/*
	{
		"weapon_proxlauncher",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/rocketl/rocketl.md3",
			"models/weapons2/rocketl/v_rocketl.md3",
			"models/weapons2/rocketl/pu_rocketl.md3",
			0, 0 },

		"icons/iconw_rocket_1",	// icon
		"icons/ammo6",		// ammo icon
		"Bazooka",				// pickup
		5,
		IT_WEAPON,
		WP_PROX,
		WP_PROX,
		WP_PROX,
		"",						// precache
		"",						// sounds
		{0,0,0,0}
	},
*/

//----(SA)	removed the quaked for this.  we don't actually have a grenade launcher as such.  It's given implicitly
//			by virtue of getting grenade ammo.  So we don't need to have them in maps
/*
weapon_grenadelauncher
*/
	{
		"weapon_grenadelauncher",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/grenade/grenade.md3",
			"models/weapons2/grenade/v_grenade.md3",
			"models/weapons2/grenade/pu_grenade.md3",
			0, 0 },

		"icons/iconw_grenade_1", // icon
		"icons/icona_grenade",   // ammo icon
		"Grenade",               // pickup
		6,
		IT_WEAPON,
		WP_GRENADE_LAUNCHER,
		WP_GRENADE_LAUNCHER,
		WP_GRENADE_LAUNCHER,
		"",                      // precache
		"sound/weapons/grenade/hgrenb1a.wav sound/weapons/grenade/hgrenb2a.wav",             // sounds
		{0,0,0,0}
	},

/*
weapon_grenadePineapple
*/
	{
		"weapon_grenadepineapple",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/grenade/pineapple.md3",
			"models/weapons2/grenade/v_pineapple.md3",
			"models/weapons2/grenade/pu_pineapple.md3",
			0, 0 },

		"icons/iconw_pineapple_1",   // icon
		"icons/icona_pineapple", // ammo icon
		"Pineapple",             // pickup
		6,
		IT_WEAPON,
		WP_GRENADE_PINEAPPLE,
		WP_GRENADE_PINEAPPLE,
		WP_GRENADE_PINEAPPLE,
		"",                      // precache
		"sound/weapons/grenade/hgrenb1a.wav sound/weapons/grenade/hgrenb2a.wav",             // sounds
		{0,0,0,0}
	},

/* JPW NERVE
weapon_grenadesmoke
*/
/*	// just commented out to remove the registration errors in SP (we register every weapon in every map in SP)
	{
		"weapon_grenadesmoke",
		"sound/misc/w_pkup.wav",
		{	"models/multiplayer/smokegrenade/smokegrenade.md3",
			"models/multiplayer/smokegrenade/v_smokegrenade.md3",
			"models/multiplayer/smokegrenade/pu_smokegrenade.md3",
			0, 0},

		"icons/iconw_smokegrenade_1",	// icon
		"icons/ammo2",	// ammo icon
		"smokeGrenade",				// pickup
		50,
		IT_WEAPON,
		WP_GRENADE_SMOKE,
		WP_GRENADE_SMOKE,
		WP_GRENADE_SMOKE,
		"",						// precache
		"sound/weapons/grenade/hgrenb1a.wav sound/weapons/grenade/hgrenb2a.wav",				// sounds
		{0,0,0,0}
	},
// jpw
*/
// DHM - Nerve
/*
weapon_medic_heal
*/
/*	{
		"weapon_medic_heal",
		"sound/misc/w_pkup.wav",
		{	"models/multiplayer/medpack/medpack.md3",
			"models/multiplayer/medpack/v_medpack.md3",
			"models/multiplayer/medpack/pu_medpack.md3",
			0, 0 },

		"icons/iconw_medheal_1",	// icon
		"icons/ammo2",			// ammo icon
		"Medic Heal",			// pickup
		50,
		IT_WEAPON,
		WP_MEDIC_HEAL,
		WP_MEDIC_HEAL,
		WP_MEDIC_HEAL,
		"",						// precache
		"",						// sounds
		{0,0,0,0}
	},
// dhm
*/
/*
weapon_dynamite
*/
	{
		"weapon_dynamite",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/dynamite/dynamite.md3",
			"models/weapons2/dynamite/v_dynamite.md3",
			"models/weapons2/dynamite/pu_dynamite.md3",
			0, 0 },

		"icons/iconw_dynamite_1",    // icon
		"icons/ammo9",           // ammo icon
		"Dynamite Weapon",       // pickup
		7,
		IT_WEAPON,
		WP_DYNAMITE,
		WP_DYNAMITE,
		WP_DYNAMITE,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},


/*
weapon_dynamite2
*/
/*
	{
		"weapon_dynamite2",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/dynamite/dynamite.md3",
			"models/weapons2/dynamite/v_dynamite.md3",
			"models/weapons2/dynamite/pu_dynamite.md3",
			0, 0 },

		"icons/iconw_dynamite_1",	// icon
		"icons/ammo9",			// ammo icon
		"Dynamite Weapon",		// pickup
		7,
		IT_WEAPON,
		WP_DYNAMITE2,
		WP_DYNAMITE,
		WP_DYNAMITE,
		"",						// precache
		"",						// sounds
		{0,0,0,0}
	},
*/



/*QUAKED weapon_venom (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/venom/pu_venom.md3"
*/
	{
		"weapon_venom",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/venom/venom.md3",
			"models/weapons2/venom/v_venom.md3",
			"models/weapons2/venom/pu_venom.md3",
			0, 0 },

		"icons/iconw_venom_1",   // icon
		"icons/ammo8",           // ammo icon
		"Venom",             // pickup
		700,
		IT_WEAPON,
		WP_VENOM,
		WP_VENOM,
		WP_VENOM,
		"",                      // precache
		"",                      // sounds
		{0,0,0,0}
	},

/* weapon_venom_shotgun (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/venom/pu_venom.md3"
*/
/*
	{
		"weapon_venom_shotgun",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/venom/venom.md3",
			"models/weapons2/venom/v_venom.md3",
			"models/weapons2/venom/pu_venom.md3",
			0, 0 },

		"icons/iconw_venom_1",	// icon
		"icons/ammo8",			// ammo icon
		"Venom Shotgun",		// pickup
		700,
		IT_WEAPON,
		WP_VENOM_FULL,
		WP_VENOM,
		WP_VENOM_FULL,
		"",						// precache
		"",						// sounds
		{0,0,0,0}
	},
*/

/* weapon_cross(.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/cross/cross.md3"
*/
/*
	{
		"weapon_cross",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/cross/cross.md3",
			"models/weapons2/cross/v_cross.md3",
			"models/weapons2/cross/pu_cross.md3",
			0, 0 },

		"icons/iconw_cross_1",	// icon
		"icons/ammo9",			// ammo icon
		"This dont exist",	// pickup
		7,
		IT_WEAPON,
		WP_CROSS,
		WP_CROSS,
		WP_CROSS,
		"",						// precache
		"",						// sounds
		{0,0,0,0}
	},
*/


/*QUAKED weapon_flamethrower (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/flamethrower/pu_flamethrower.md3"
*/
	{
		"weapon_flamethrower",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/flamethrower/flamethrower.md3",
			"models/weapons2/flamethrower/v_flamethrower.md3",
			"models/weapons2/flamethrower/pu_flamethrower.md3",
			0, 0 },

		"icons/iconw_flamethrower_1",    // icon
		"icons/ammo10",              // ammo icon
		"Flamethrower",              // pickup
		200,
		IT_WEAPON,
		WP_FLAMETHROWER,
		WP_FLAMETHROWER,
		WP_FLAMETHROWER,
		"",                          // precache
		"",                          // sounds
		{0,0,0,0}
	},


/*QUAKED weapon_tesla (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/tesla/pu_tesla.md3"
*/
	{
		"weapon_tesla",
		"sound/misc/w_pkup.wav",

		{   "models/weapons2/tesla/tesla.md3",
			"models/weapons2/tesla/v_tesla.md3",
			"models/weapons2/tesla/pu_tesla.md3",
			0, 0 },

		"icons/iconw_tesla_1",   // icon
		"icons/ammo10",              // ammo icon
		"Tesla Gun",             // pickup
		200,
		IT_WEAPON,
		WP_TESLA,
		WP_TESLA,
		WP_TESLA,
		"",                          // precache
		"",                          // sounds
		{0,0,0,0}
	},


//----(SA)	new weaps

/* weapon_speargun (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/speargun/pu_speargun.md3"
*/
/*
	{
		"weapon_speargun",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/speargun/speargun.md3",
			"models/weapons2/speargun/v_speargun.md3",
			"models/weapons2/speargun/pu_speargun.md3",
			0, 0 },
		"icons/iconw_speargun_1",	// icon
		"icons/ammo10",				// ammo icon
		"Speargun",					// pickup
		50,
		IT_WEAPON,
		WP_SPEARGUN,
		WP_SPEARGUN,
		WP_SPEARGUN,
		"",							// precache
		"",							// sounds
		{0,0,0,0}
	},
	*/

/* weapon_speargun_c02 (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/speargun/pu_speargun.md3"
*/
/*
	{
		"weapon_speargun_co2",
		"sound/misc/w_pkup.wav",
		{	"models/weapons2/speargun/speargun.md3",
			"models/weapons2/speargun/v_speargun.md3",
			"models/weapons2/speargun/pu_speargun.md3",
			0, 0 },

		"icons/iconw_speargun_1",	// icon
		"icons/ammo10",				// ammo icon
		"CO2 Spears",					// pickup
		50,
		IT_WEAPON,
		WP_SPEARGUN_CO2,
		WP_SPEARGUN_CO2,
		WP_SPEARGUN_CO2,
		"",							// precache
		"",							// sounds
		{0,0,0,0}
	},
*/

/*QUAKED weapon_sniperScope (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/mauser/pu_mauser_scope.md3"
*/
	{
		"weapon_sniperScope",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/mauser/mauser.md3",
			"models/weapons2/mauser/v_mauser.md3",
//			"models/weapons2/mauser/v_mauser_scope.md3",
			"models/weapons2/mauser/pu_mauser_scope.md3",
			0, 0 },

//		"icons/iconw_sniper_1",	// icon
		"icons/iconw_mauser_1",  // icon
		"icons/ammo10",              // ammo icon
		"Sniper Scope",              // pickup
		200,
		IT_WEAPON,
		WP_SNIPERRIFLE,
		WP_MAUSER,
		WP_MAUSER,
		"",                          // precache
		"",                          // sounds
		{0,0,0,0}
	},

/*QUAKED weapon_snooperrifle (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/weapons2/garand/garand.md3"
*/
	{
		"weapon_snooperrifle",   //----(SA)	modified
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/garand/garand.md3",
			"models/weapons2/garand/v_garand.md3",
			"models/weapons2/garand/pu_garand.md3",
			0, 0 },

		"icons/iconw_garand_1",  // icon
		"icons/ammo10",              // ammo icon
		"Snooper Rifle",             // pickup		//----(SA)	modified
		20,
		IT_WEAPON,
		WP_SNOOPERSCOPE,
		WP_GARAND,
		WP_GARAND,
		"",                          // precache
		"",                          // sounds
		{0,0,0,0}
	},

/* weapon_fg42scope
*/
	{
		"weapon_fg42scope",  //----(SA)	modified
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/fg42/fg42.md3",
			"models/weapons2/fg42/v_fg42.md3",
			"models/weapons2/fg42/pu_fg42.md3",
			0, 0},

		"icons/iconw_fg42_1",    // icon
		"icons/ammo5",               // ammo icon
		"FG42 Scope",                // pickup		//----(SA)	modified
		0,
		IT_WEAPON,
		WP_FG42SCOPE,   // this weap
		WP_MAUSER,      // shares ammo w/
		WP_FG42,        // shares clip w/
		"",                          // precache
		"",                          // sounds
		{0,0,0,0}
	},


// Ridah, need this for the scripting
/*
weapon_monster_attack1 (.3 .3 1) (-16 -16 -16) (16 16 16) suspended
*/
	{
		"weapon_monster_attack1",
		"",
		{   "",
			"",
			0, 0},
		"",  // icon
		NULL,   // ammo icon
		"MonsterAttack1",            // pickup
		100,
		IT_WEAPON,
		WP_MONSTER_ATTACK1,
		WP_MONSTER_ATTACK1,         // ammo
		WP_MONSTER_ATTACK1,         //
		"",                          // precache
		"",                          // sounds
		{0,0,0,0}
	},
/*
weapon_monster_attack2 (.3 .3 1) (-16 -16 -16) (16 16 16) suspended
*/
	{
		"weapon_monster_attack2",
		"",
		{   "",
			"",
			0, 0},
		"",  // icon
		NULL,   // ammo icon
		"MonsterAttack2",            // pickup
		100,
		IT_WEAPON,
		WP_MONSTER_ATTACK2,
		WP_MONSTER_ATTACK2,         // ammo
		WP_MONSTER_ATTACK2,         //
		"",                          // precache
		"",                          // sounds
		{0,0,0,0}
	},
/*
weapon_monster_attack3 (.3 .3 1) (-16 -16 -16) (16 16 16) suspended
*/
	{
		"weapon_monster_attack3",
		"",
		{   "",
			"",
			0, 0},
		"",  // icon
		NULL,   // ammo icon
		"MonsterAttack3",            // pickup
		100,
		IT_WEAPON,
		WP_MONSTER_ATTACK3,
		WP_MONSTER_ATTACK3,         // ammo
		WP_MONSTER_ATTACK3,
		"",                          // precache
		"",                          // sounds
		{0,0,0,0}
	},

/*
weapon_mortar (.3 .3 1) (-16 -16 -16) (16 16 16) suspended
*/
	{
		"weapon_mortar",
		"sound/misc/w_pkup.wav",
		{   "models/weapons2/grenade/grenade.md3",
			"models/weapons2/grenade/v_grenade.md3",
			"models/weapons2/grenade/pu_grenade.md3",
			0, 0},
		"icons/iconw_grenade_1", // icon
		"icons/icona_grenade",   // ammo icon
		"nopickup(WP_MORTAR)",       // pickup
		6,
		IT_WEAPON,
		WP_MORTAR,
		WP_MORTAR,
		WP_MORTAR,
		"",                      // precache
		"sound/weapons/mortar/mortarf1.wav",             // sounds
		{0,0,0,0}
	},


// JPW NERVE -- class-specific multiplayer weapon, can't be picked up, dropped, or placed in map
/*
weapon_class_special (.3 .3 1) (-16 -16 -16) (16 16 16) suspended
*/
/*
	{
		"weapon_class_special",
		"sound/misc/w_pkup.wav",
		{	"models/multiplayer/hammer/hammer.md3",
			"models/multiplayer/hammer/v_hammer.md3",
			"models/multiplayer/hammer/pu_hammer.md3",
			0, 0, },

		"icons/iconw_hammer_1",	// icon
		"icons/ammo2",			// ammo icon
		"Special",				// pickup
		50, // this should never be picked up
		IT_WEAPON,
		WP_CLASS_SPECIAL,
		WP_CLASS_SPECIAL,
		WP_CLASS_SPECIAL,
		"",						// precache
		"",						// sounds
		{0,0,0,0}
	},
// jpw
*/




	//
	// AMMO ITEMS
	//



/*QUAKED ammo_9mm_small (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Luger pistol, MP40 machinegun

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am9mm_s.md3"
*/
	{
		"ammo_9mm_small",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am9mm_s.md3",
		  0, 0, 0, 0 },
		"icons/iconw_luger_1", // icon
		NULL,               // ammo icon
		"9mm Rounds",        // pickup
		30,
		IT_AMMO,
		WP_LUGER,
		WP_LUGER,
		WP_LUGER,
		"",                  // precache
		"",                  // sounds
		{32,24,16,16}
	},
/*QUAKED ammo_9mm (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Luger pistol, MP40 machinegun

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am9mm_m.md3"
*/
	{
		"ammo_9mm",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am9mm_m.md3",
		  0, 0, 0,    0 },
		"icons/iconw_luger_1", // icon
		NULL,               // ammo icon
		"9mm",           // pickup			//----(SA)	changed
		60,
		IT_AMMO,
		WP_LUGER,
		WP_LUGER,
		WP_LUGER,
		"",                  // precache
		"",                  // sounds
		{64,48,32,32}
	},
/*QUAKED ammo_9mm_large (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Luger pistol, MP40 machinegun

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am9mm_l.md3"
*/
	{
		"ammo_9mm_large",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am9mm_l.md3",
		  0, 0, 0,    0 },
		"icons/iconw_luger_1", // icon
		NULL,               // ammo icon
		"9mm Box",           // pickup
		100,
		IT_AMMO,
		WP_LUGER,
		WP_LUGER,
		WP_LUGER,
		"",                  // precache
		"",                  // sounds
		{96,64,48,48}
	},


/*QUAKED ammo_45cal_small (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Thompson, Colt

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am45cal_s.md3"
*/
	{
		"ammo_45cal_small",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am45cal_s.md3",
		  0, 0, 0,    0 },
		"icons/iconw_luger_1", // icon
		NULL,               // ammo icon
		".45cal Rounds", // pickup
		20,
		IT_AMMO,
		WP_COLT,
		WP_COLT,
		WP_COLT,
		"",                  // precache
		"",                  // sounds
		{30,20,15,15}
	},
/*QUAKED ammo_45cal (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Thompson, Colt

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am45cal_m.md3"
*/
	{
		"ammo_45cal",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am45cal_m.md3",
		  0, 0, 0,    0 },
		"icons/iconw_luger_1", // icon
		NULL,               // ammo icon
		".45cal",        // pickup			//----(SA)	changed
		60,
		IT_AMMO,
		WP_COLT,
		WP_COLT,
		WP_COLT,
		"",                  // precache
		"",                  // sounds
		{60,45,30,30}
	},
/*QUAKED ammo_45cal_large (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Thompson, Colt

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am45cal_l.md3"
*/
	{
		"ammo_45cal_large",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am45cal_l.md3",
		  0, 0, 0,    0 },
		"icons/iconw_luger_1", // icon
		NULL,               // ammo icon
		".45cal Box",        // pickup
		100,
		IT_AMMO,
		WP_COLT,
		WP_COLT,
		WP_COLT,
		"",                  // precache
		"",                  // sounds
		{90,60,45,45}
	},




/*QUAKED ammo_792mm_small (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Mauser rifle, FG42

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am792mm_s.md3"
*/
	{
		"ammo_792mm_small",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am792mm_s.md3",
		  0, 0, 0,    0 },
		"icons/icona_machinegun",    // icon
		NULL,                       // ammo icon
		"7.92mm Rounds",         // pickup
		50,
		IT_AMMO,
		WP_MAUSER,
		WP_MAUSER,
		WP_MAUSER,
		"",                          // precache
		"",                          // sounds
		{16,12,8,8}
	},
/*QUAKED ammo_792mm (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Mauser rifle, FG42

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am792mm_m.md3"
*/
	{
		"ammo_792mm",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am792mm_m.md3",
		  0, 0, 0,    0 },
		"icons/icona_machinegun",    // icon
		NULL,                       // ammo icon
		"7.92mm",                // pickup			//----(SA)	changed
		10,
		IT_AMMO,
		WP_MAUSER,
		WP_MAUSER,
		WP_MAUSER,
		"",                          // precache
		"",                          // sounds
		{32,24,16,16}
	},
/*QUAKED ammo_792mm_large (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Mauser rifle, FG42

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am792mm_l.md3"
*/
	{
		"ammo_792mm_large",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am792mm_l.md3",
		  0, 0, 0,    0 },
		"icons/icona_machinegun",    // icon
		NULL,                       // ammo icon
		"7.92mm Box",                // pickup
		50,
		IT_AMMO,
		WP_MAUSER,
		WP_MAUSER,
		WP_MAUSER,
		"",                          // precache
		"",                          // sounds
		{48,32,24,24}
	},




/*QUAKED ammo_30cal_small (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Garand rifle

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am30cal_s.md3"
*/
	{
		"ammo_30cal_small",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am30cal_s.md3",
		  0, 0, 0,    0 },
		"icons/icona_machinegun",    // icon
		NULL,                       // ammo icon
		".30cal Rounds",         // pickup
		50,
		IT_AMMO,
		WP_GARAND,
		WP_GARAND,
		WP_GARAND,
		"",                          // precache
		"",                          // sounds
		{5,2,2,2}
	},
/*QUAKED ammo_30cal (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Garand rifle

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am30cal_m.md3"
*/
	{
		"ammo_30cal",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am30cal_m.md3",
		  0, 0, 0,    0 },
		"icons/icona_machinegun",    // icon
		NULL,                       // ammo icon
		".30cal",                // pickup			//----(SA)	changed
		50,
		IT_AMMO,
		WP_GARAND,
		WP_GARAND,
		WP_GARAND,
		"",                          // precache
		"",                          // sounds
		{5,5,5,5    }
	},
/*QUAKED ammo_30cal_large (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Garand rifle

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am30cal_l.md3"
*/
	{
		"ammo_30cal_large",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am30cal_l.md3",
		  0, 0, 0,    0 },
		"icons/icona_machinegun",    // icon
		NULL,                       // ammo icon
		".30cal Box",                // pickup
		50,
		IT_AMMO,
		WP_GARAND,
		WP_GARAND,
		WP_GARAND,
		"",                          // precache
		"",                          // sounds
		{10,10,10,5}
	},




/*QUAKED ammo_127mm (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Venom gun

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/am127mm.md3"
*/
	{
		"ammo_127mm",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/am127mm.md3",
		  0, 0, 0,    0 },
		"icons/icona_machinegun",    // icon
		NULL,                       // ammo icon
		"12.7mm",                    // pickup
		100,
		IT_AMMO,
		WP_VENOM,
		WP_VENOM,
		WP_VENOM,
		"",                          // precache
		"",                          // sounds
		{100,75,50,50}
	},

/*QUAKED ammo_grenades (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/amgren_bag.md3"
*/
	{
		"ammo_grenades",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/amgren_bag.md3",
		  0, 0, 0,    0 },
		"icons/icona_grenade",   // icon
		NULL,                   // ammo icon
		"Grenades",              // pickup
		5,
		IT_AMMO,
		WP_GRENADE_LAUNCHER,
		WP_GRENADE_LAUNCHER,
		WP_GRENADE_LAUNCHER,
		"",                      // precache
		"",                      // sounds
		{5,4,3,3}
	},

/*QUAKED ammo_grenades_american (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/amgrenus_bag.md3"
*/
	{
		"ammo_grenades_american",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/amgrenus_bag.md3",
		  0, 0, 0,    0 },
		"icons/icona_pineapple", // icon
		NULL,                   // ammo icon
		"Pineapples",            // pickup
		5,
		IT_AMMO,
		WP_GRENADE_PINEAPPLE,
		WP_GRENADE_PINEAPPLE,
		WP_GRENADE_PINEAPPLE,
		"",                      // precache
		"",                      // sounds
		{5,4,3,3}
	},

/*QUAKED ammo_dynamite (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN

 -------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/dynamite.md3"
*/
	{
		"ammo_dynamite",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/dynamite.md3",
		  0, 0, 0,    0 },
		"icons/icona_dynamite",  // icon
		NULL,                   // ammo icon
		"Dynamite",              // pickup
		1,
		IT_AMMO,
		WP_DYNAMITE,
		WP_DYNAMITE,
		WP_DYNAMITE,
		"",                      // precache
		"",                      // sounds
		{1,1,1,1}
	},


/*QUAKED ammo_cell (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Tesla

Boosts recharge on Tesla
-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/amcell.md3"
*/
	{
		"ammo_cell",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/amcell.md3",
		  0, 0, 0,    0 },
		"icons/icona_cell",  // icon
		NULL,               // ammo icon
		"Cell",              // pickup
		500,
		IT_AMMO,
		WP_TESLA,
		WP_TESLA,
		WP_TESLA,
		"",                  // precache
		"",                  // sounds
		{100,75,50,50}
	},



/*QUAKED ammo_fuel (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Flamethrower

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/amfuel.md3"
*/
	{
		"ammo_fuel",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/amfuel.md3",
		  0, 0, 0,    0 },
		"icons/icona_fuel",  // icon
		NULL,               // ammo icon
		"Fuel",              // pickup
		100,
		IT_AMMO,
		WP_FLAMETHROWER,
		WP_FLAMETHROWER,
		WP_FLAMETHROWER,
		"",                  // precache
		"",                  // sounds
		{100,75,50,50}
	},


/* ammo_speargun (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Speargun

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/amspear.md3"
*/
/*
	{
		"ammo_speargun",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/amspear.md3",
		0, 0, 0,	0 },
		"icons/icona_spear",	// icon
		NULL,					// ammo icon
		"Speargun Bolts",			// pickup
		10,
		IT_AMMO,
		WP_SPEARGUN,
		WP_SPEARGUN,
		WP_SPEARGUN,
		"",					// precache
		"",					// sounds
		{100,75,50,50}
	},
*/


/* ammo_speargun_co2 (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
CO2 tipped speargun bolts

used by: Speargun

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/amspear.md3"
*/
/*
	{
		"ammo_speargun_co2",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/amspear.md3",
		0, 0, 0,	0 },
		"icons/icona_spear",	// icon
		NULL,					// ammo icon
		"C02 Speargun Bolts",	// pickup
		10,
		IT_AMMO,
		WP_SPEARGUN_CO2,
		WP_SPEARGUN_CO2,
		WP_SPEARGUN_CO2,
		"",					// precache
		"",					// sounds
		{100,75,50,50}
	},
*/


//----(SA)	removed ammo_sniper(_n)

//----(SA)	removed ammo_snooper(_n)


/*QUAKED ammo_panzerfaust (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: German Panzerfaust

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/ampf.md3"
*/
	{
		"ammo_panzerfaust",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/ampf.md3",
		  0, 0, 0,    0 },
		"icons/icona_panzerfaust",   // icon
		NULL,                   // ammo icon
		"Panzerfaust Rockets",               // pickup
		5,
		IT_AMMO,
		WP_PANZERFAUST,
		WP_PANZERFAUST,
		WP_PANZERFAUST,
		"",                      // precache
		"",                      // sounds
		{4,3,2,2}
	},


/* ammo_rockets (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Allied Rocket Launcher (bazooka)

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/amrocket.md3"
*/
/*
	{
		"ammo_rockets",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/amrocket.md3",
		0, 0, 0,	0 },
		"icons/icona_rocket",	// icon
		NULL,					// ammo icon
		"Rockets",				// pickup
		5,
		IT_AMMO,
		WP_ROCKET_LAUNCHER,
		WP_ROCKET_LAUNCHER,
		WP_ROCKET_LAUNCHER,
		"",						// precache
		"",						// sounds
		{4,3,2,2}
	},
*/

/* ammo_charges (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
used by: Cross of Coronado

-------- MODEL FOR RADIANT ONLY - DO NOT SET THIS AS A KEY --------
model="models/powerups/ammo/amcharges.md3"
*/
/*
	{
		"ammo_charges",
		"sound/misc/am_pkup.wav",
		{ "models/powerups/ammo/amcharges.md3",
		0, 0, 0,	0 },
		"icons/icona_charges",	// icon
		NULL,					// ammo icon
		"Charges",				// pickup
		2,
		IT_AMMO,
		WP_CROSS,
		WP_CROSS,
		WP_CROSS,
		"",						// precache
		"",						// sounds
		{4,2,2,1}
	},
*/

//----(SA)	hopefully it doesn't need to be a quaked thing.
//			apologies if it does and I'll put it back.
/*
ammo_monster_attack1 (.3 .3 1) (-16 -16 -16) (16 16 16) suspended
used by: Monster Attack 1 (specific to each monster)
*/
	{
		"ammo_monster_attack1",
		"",
		{ "",
		  0, 0, 0},
		"",                      // icon
		NULL,                   // ammo icon
		"MonsterAttack1",        // pickup
		60,
		IT_AMMO,
		WP_MONSTER_ATTACK1,
		WP_MONSTER_ATTACK1,
		WP_MONSTER_ATTACK1,
		"",
		"",
		{0,0,0,0}
	},


	//
	// HOLDABLE ITEMS
	//

//----(SA)	updated a number of powerup items (11/6/00)

/* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN

pickup sound : "sound/pickup/holdable/get_medkit.wav"
