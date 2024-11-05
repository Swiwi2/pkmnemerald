FairyCircleSouth_MapScripts::
# 2 "data/maps/FairyCircleSouth/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FairyCircleSouth_OnTransition
	.byte 0


FairyCircleSouth_OnTransition::
# 16 "data/maps/FairyCircleSouth/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, FairyCircleSouth_OnTransition_1
# 20 "data/maps/FairyCircleSouth/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, FairyCircleSouth_OnTransition_4
# 24 "data/maps/FairyCircleSouth/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FairyCircleSouth_OnTransition_7
# 28 "data/maps/FairyCircleSouth/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FairyCircleSouth_OnTransition_10
# 32 "data/maps/FairyCircleSouth/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, FairyCircleSouth_OnTransition_13
# 36 "data/maps/FairyCircleSouth/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, FairyCircleSouth_OnTransition_16
# 40 "data/maps/FairyCircleSouth/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, FairyCircleSouth_OnTransition_19
# 44 "data/maps/FairyCircleSouth/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, FairyCircleSouth_OnTransition_22
# 48 "data/maps/FairyCircleSouth/scripts.pory"
	setvar VAR_FAIRY_CIRCLE_SOUTH_STATE, 0
	return

FairyCircleSouth_OnTransition_1:
# 17 "data/maps/FairyCircleSouth/scripts.pory"
	setvar VAR_FAIRY_CIRCLE_SOUTH_STATE, 8
	return

FairyCircleSouth_OnTransition_4:
# 21 "data/maps/FairyCircleSouth/scripts.pory"
	setvar VAR_FAIRY_CIRCLE_SOUTH_STATE, 7
	return

FairyCircleSouth_OnTransition_7:
# 25 "data/maps/FairyCircleSouth/scripts.pory"
	setvar VAR_FAIRY_CIRCLE_SOUTH_STATE, 6
	return

FairyCircleSouth_OnTransition_10:
# 29 "data/maps/FairyCircleSouth/scripts.pory"
	setvar VAR_FAIRY_CIRCLE_SOUTH_STATE, 5
	return

FairyCircleSouth_OnTransition_13:
# 33 "data/maps/FairyCircleSouth/scripts.pory"
	setvar VAR_FAIRY_CIRCLE_SOUTH_STATE, 4
	return

FairyCircleSouth_OnTransition_16:
# 37 "data/maps/FairyCircleSouth/scripts.pory"
	setvar VAR_FAIRY_CIRCLE_SOUTH_STATE, 3
	return

FairyCircleSouth_OnTransition_19:
# 41 "data/maps/FairyCircleSouth/scripts.pory"
	setvar VAR_FAIRY_CIRCLE_SOUTH_STATE, 2
	return

FairyCircleSouth_OnTransition_22:
# 45 "data/maps/FairyCircleSouth/scripts.pory"
	setvar VAR_FAIRY_CIRCLE_SOUTH_STATE, 1
	return


FairyCircleSouth_EventScript_WoodholmeWarp::
# 61 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 62 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveUp
# 63 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 64 "data/maps/FairyCircleSouth/scripts.pory"
	warp MAP_WOODHOLME_CITY, 5
# 65 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return


FairyCircleSouth_EventScript_SerenleafWarp::
# 69 "data/maps/FairyCircleSouth/scripts.pory"
	compare VAR_FAIRY_CIRCLE_SOUTH_STATE, 0
	goto_if_gt FairyCircleSouth_EventScript_SerenleafWarp_1
# 77 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 78 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_SerenleafWarp_Text_0
# 79 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveUp
# 80 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 81 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return

FairyCircleSouth_EventScript_SerenleafWarp_1:
# 70 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 71 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 72 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 73 "data/maps/FairyCircleSouth/scripts.pory"
	warp MAP_SERENLEAF_CITY, 7
# 74 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return


FairyCircleSouth_EventScript_AmbervilleWarp::
# 86 "data/maps/FairyCircleSouth/scripts.pory"
	compare VAR_FAIRY_CIRCLE_SOUTH_STATE, 1
	goto_if_gt FairyCircleSouth_EventScript_AmbervilleWarp_1
# 94 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 95 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_SerenleafWarp_Text_0
# 96 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 97 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 98 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return

FairyCircleSouth_EventScript_AmbervilleWarp_1:
# 87 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 88 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveUp
# 89 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 90 "data/maps/FairyCircleSouth/scripts.pory"
	warp MAP_AMBERVILLE_CITY, 4
# 91 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return


FairyCircleSouth_EventScript_EmbervilleWarp::
# 103 "data/maps/FairyCircleSouth/scripts.pory"
	compare VAR_FAIRY_CIRCLE_SOUTH_STATE, 2
	goto_if_gt FairyCircleSouth_EventScript_EmbervilleWarp_1
# 111 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 112 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_SerenleafWarp_Text_0
# 113 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 114 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 115 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return

FairyCircleSouth_EventScript_EmbervilleWarp_1:
# 104 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 105 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveUp
# 106 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 107 "data/maps/FairyCircleSouth/scripts.pory"
	warp MAP_EMBERVILLE_CITY, 1
# 108 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return


FairyCircleSouth_EventScript_EnimerosWarp::
# 120 "data/maps/FairyCircleSouth/scripts.pory"
	compare VAR_FAIRY_CIRCLE_SOUTH_STATE, 3
	goto_if_gt FairyCircleSouth_EventScript_EnimerosWarp_1
# 128 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 129 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_SerenleafWarp_Text_0
# 130 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveUp
# 131 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 132 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return

FairyCircleSouth_EventScript_EnimerosWarp_1:
# 121 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 122 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 123 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 124 "data/maps/FairyCircleSouth/scripts.pory"
	warp MAP_ENIMEROS_CITY, 5
# 125 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return


FairyCircleSouth_EventScript_PakkasjarvenWarp::
# 137 "data/maps/FairyCircleSouth/scripts.pory"
	compare VAR_FAIRY_CIRCLE_SOUTH_STATE, 4
	goto_if_gt FairyCircleSouth_EventScript_PakkasjarvenWarp_1
# 145 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 146 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_SerenleafWarp_Text_0
# 147 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 148 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 149 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return

FairyCircleSouth_EventScript_PakkasjarvenWarp_1:
# 138 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 139 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveUp
# 140 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 141 "data/maps/FairyCircleSouth/scripts.pory"
	warp MAP_PAKKASJARVEN_CITY, 1
# 142 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return


FairyCircleSouth_EventScript_AtomIslandWarp::
# 154 "data/maps/FairyCircleSouth/scripts.pory"
	compare VAR_FAIRY_CIRCLE_SOUTH_STATE, 5
	goto_if_gt FairyCircleSouth_EventScript_AtomIslandWarp_1
# 162 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 163 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_SerenleafWarp_Text_0
# 164 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 165 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 166 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return

FairyCircleSouth_EventScript_AtomIslandWarp_1:
# 155 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 156 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveUp
# 157 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 158 "data/maps/FairyCircleSouth/scripts.pory"
	warp MAP_ATOM_ISLAND, 1
# 159 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return


FairyCircleSouth_EventScript_FarmvilleWarp::
# 171 "data/maps/FairyCircleSouth/scripts.pory"
	compare VAR_FAIRY_CIRCLE_SOUTH_STATE, 6
	goto_if_gt FairyCircleSouth_EventScript_FarmvilleWarp_1
# 179 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 180 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_SerenleafWarp_Text_0
# 181 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 182 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 183 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return

FairyCircleSouth_EventScript_FarmvilleWarp_1:
# 172 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 173 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveUp
# 174 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 175 "data/maps/FairyCircleSouth/scripts.pory"
	warp MAP_FARMVILLE_CITY, 1
# 176 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return


FairyCircleSouth_EventScript_PokeLeagueWarp::
# 188 "data/maps/FairyCircleSouth/scripts.pory"
	compare VAR_FAIRY_CIRCLE_SOUTH_STATE, 7
	goto_if_gt FairyCircleSouth_EventScript_PokeLeagueWarp_1
# 196 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 197 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_SerenleafWarp_Text_0
# 198 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 199 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 200 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return

FairyCircleSouth_EventScript_PokeLeagueWarp_1:
# 189 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 190 "data/maps/FairyCircleSouth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveUp
# 191 "data/maps/FairyCircleSouth/scripts.pory"
	waitmovement 0
# 192 "data/maps/FairyCircleSouth/scripts.pory"
	warp MAP_POKEMON_LEAGUE, 0
# 193 "data/maps/FairyCircleSouth/scripts.pory"
	releaseall
	return


FairyCircleSouth_EventScript_WoodholmeSign::
# 206 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 207 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_WoodholmeSign_Text_0
# 208 "data/maps/FairyCircleSouth/scripts.pory"
	release
	return


FairyCircleSouth_EventScript_SerenleafSign::
# 212 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 213 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_SerenleafSign_Text_0
# 214 "data/maps/FairyCircleSouth/scripts.pory"
	release
	return


FairyCircleSouth_EventScript_AmbervilleSign::
# 218 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 219 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_AmbervilleSign_Text_0
# 220 "data/maps/FairyCircleSouth/scripts.pory"
	release
	return


FairyCircleSouth_EventScript_EmbervilleSign::
# 224 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 225 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_EmbervilleSign_Text_0
# 226 "data/maps/FairyCircleSouth/scripts.pory"
	release
	return


FairyCircleSouth_EventScript_EnimerosSign::
# 230 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 231 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_EnimerosSign_Text_0
# 232 "data/maps/FairyCircleSouth/scripts.pory"
	release
	return


FairyCircleSouth_EventScript_PakkasjarvenSign::
# 236 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 237 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_PakkasjarvenSign_Text_0
# 238 "data/maps/FairyCircleSouth/scripts.pory"
	release
	return


FairyCircleSouth_EventScript_AtomIslandSign::
# 242 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 243 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_AtomIslandSign_Text_0
# 244 "data/maps/FairyCircleSouth/scripts.pory"
	release
	return


FairyCircleSouth_EventScript_FarmvilleSign::
# 248 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 249 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_FarmvilleSign_Text_0
# 250 "data/maps/FairyCircleSouth/scripts.pory"
	release
	return


FairyCircleSouth_EventScript_PokemonLeagueSign::
# 254 "data/maps/FairyCircleSouth/scripts.pory"
	lock
# 255 "data/maps/FairyCircleSouth/scripts.pory"
	msgbox FairyCircleSouth_EventScript_PokemonLeagueSign_Text_0
# 256 "data/maps/FairyCircleSouth/scripts.pory"
	release
	return


# 260 "data/maps/FairyCircleSouth/scripts.pory"
PlayerMoveUp:
# 261 "data/maps/FairyCircleSouth/scripts.pory"
	walk_up
	step_end

# 264 "data/maps/FairyCircleSouth/scripts.pory"
PlayerMoveDown:
# 265 "data/maps/FairyCircleSouth/scripts.pory"
	walk_down
	step_end

FairyCircleSouth_EventScript_SerenleafWarp_Text_0:
# 78 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Can't do that right now.$"

FairyCircleSouth_EventScript_WoodholmeSign_Text_0:
# 207 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Travel to the Fairy Circle near\n"
	.string "Woodholme City.$"

FairyCircleSouth_EventScript_SerenleafSign_Text_0:
# 213 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Travel to the Fairy Circle near\n"
	.string "Serenleaf City.$"

FairyCircleSouth_EventScript_AmbervilleSign_Text_0:
# 219 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Travel to the Fairy Circle near\n"
	.string "Amberville City.$"

FairyCircleSouth_EventScript_EmbervilleSign_Text_0:
# 225 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Travel to the Fairy Circle near\n"
	.string "Emberville City.$"

FairyCircleSouth_EventScript_EnimerosSign_Text_0:
# 231 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Travel to the Fairy Circle near Enimeros\n"
	.string "City.$"

FairyCircleSouth_EventScript_PakkasjarvenSign_Text_0:
# 237 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Travel to the Fairy Circle near\n"
	.string "Pakkasjarven City.$"

FairyCircleSouth_EventScript_AtomIslandSign_Text_0:
# 243 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Travel to the Fairy Circle near Atom\n"
	.string "Island.$"

FairyCircleSouth_EventScript_FarmvilleSign_Text_0:
# 249 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Travel to the Fairy Circle near\n"
	.string "Farmville City.$"

FairyCircleSouth_EventScript_PokemonLeagueSign_Text_0:
# 255 "data/maps/FairyCircleSouth/scripts.pory"
	.string "Travel to the Fairy Circle near the\n"
	.string "Pokémon League.$"
