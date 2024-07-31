Woodholme_Lab_MapScripts::
# 2 "data/maps/Woodholme_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_Lab_OnTransition
	.byte 0


Woodholme_Lab_OnTransition::
	return


Woodholme_Lab_EventScript_Red::
# 16 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 17 "data/maps/Woodholme_Lab/scripts.pory"
	faceplayer
# 19 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_Red_6
Woodholme_Lab_EventScript_Red_5:
# 23 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_WOODHOLME_STATE, 0
	goto_if_ne Woodholme_Lab_EventScript_Red_3
# 29 "data/maps/Woodholme_Lab/scripts.pory"
	faceplayer
# 30 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_Red2
Woodholme_Lab_EventScript_Red_1:
# 32 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 33 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_Red_2:
# 20 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_Red1
	goto Woodholme_Lab_EventScript_Red_1

Woodholme_Lab_EventScript_Red_3:
# 24 "data/maps/Woodholme_Lab/scripts.pory"
	faceplayer
# 25 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_Red_Text_0
	goto Woodholme_Lab_EventScript_Red_1

Woodholme_Lab_EventScript_Red_6:
# 19 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_Red_8
	goto Woodholme_Lab_EventScript_Red_5

Woodholme_Lab_EventScript_Red_8:
# 19 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_Red_2
	goto Woodholme_Lab_EventScript_Red_5


Woodholme_Lab_Trigger_GetPokedexLeft::
# 49 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 50 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, RedMove1
# 51 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 52 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerTurnAround
# 53 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 54 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex
# 55 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 2
# 56 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 57 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 58 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 59 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 60 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 61 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_Trigger_GetPokedexCenter::
# 66 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 67 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, RedMove2
# 68 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 69 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerTurnAround
# 70 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 71 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex
# 72 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 2
# 73 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 74 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 75 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 76 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 77 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 78 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


# 81 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerTurnAround:
# 82 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
	step_end

Woodholme_Lab_Trigger_GetPokedexRight::
# 87 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 88 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, RedMove3
# 89 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 90 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerTurnAround
# 91 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 92 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex
# 93 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 2
# 94 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 95 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 96 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 97 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 98 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 99 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


# 117 "data/maps/Woodholme_Lab/scripts.pory"
RedMove1:
# 118 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 119 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 119 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 122 "data/maps/Woodholme_Lab/scripts.pory"
RedMove2:
# 123 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 124 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 125 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 126 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 126 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 129 "data/maps/Woodholme_Lab/scripts.pory"
RedMove3:
# 130 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 131 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 131 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 132 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 133 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 133 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

Woodholme_Lab_EventScript_GivePokedex::
# 139 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 140 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GivePokedex_Text_0
# 141 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/Woodholme_Lab/scripts.pory"
	message Woodholme_Lab_EventScript_GivePokedex_Text_1
# 143 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 144 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 145 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 146 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 147 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 148 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 149 "data/maps/Woodholme_Lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 150 "data/maps/Woodholme_Lab/scripts.pory"
	special EnableNationalPokedex
# 151 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 152 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 153 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 1
# 154 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GivePokedex_Text_2
# 155 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 156 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_EventScript_GiveExpShare::
# 162 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 163 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GiveExpShare_Text_0
# 164 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/Woodholme_Lab/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 166 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 167 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 168 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_Trigger_RedIntro1::
# 173 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 174 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter1
# 175 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 176 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 177 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 178 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 179 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 180 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 181 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 182 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 183 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro1_2
# 189 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro1_1:
# 191 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 192 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro1_2:
# 185 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro1_1


Woodholme_Lab_Trigger_RedIntro2::
# 196 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 197 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter2
# 198 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 199 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 200 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 201 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 202 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 203 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 204 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 205 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 206 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro2_2
# 212 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro2_1:
# 214 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 215 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro2_2:
# 208 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro2_1


Woodholme_Lab_Trigger_RedIntro3::
# 219 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 220 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter3
# 221 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 222 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 223 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 224 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 225 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 226 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 227 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 228 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 229 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro3_2
# 235 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro3_1:
# 237 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 238 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro3_2:
# 231 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro3_1


Woodholme_Lab_Trigger_RedIntro4::
# 242 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 243 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter4
# 244 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 245 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 246 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 247 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 248 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 249 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 250 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 251 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 252 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro4_2
# 258 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro4_1:
# 260 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 261 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro4_2:
# 254 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro4_1


# 264 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_MayLeave:
# 265 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 266 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 266 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 266 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 266 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 266 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 267 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 268 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 269 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 270 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 273 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_RedFaceRight:
# 274 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
	step_end

# 277 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter1:
# 278 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 279 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 279 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 279 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 280 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 281 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 282 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 283 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 283 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 283 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 283 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 284 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 285 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 288 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter2:
# 289 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 289 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 289 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 289 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 289 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 289 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 290 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 291 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 294 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter3:
# 295 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 295 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 295 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 295 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 295 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 295 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 296 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 297 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 298 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 301 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter4:
# 302 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 302 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 302 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 303 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 304 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 304 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 305 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 306 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 306 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 306 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 306 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 307 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 308 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

Woodholme_Lab_EventScript_PokeballLeft::
# 326 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 328 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballLeft_4
Woodholme_Lab_EventScript_PokeballLeft_3:
# 361 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballLeft_1:
# 363 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 364 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballLeft_2:
# 329 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 330 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_0, MSGBOX_YESNO
# 331 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_9
# 355 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 356 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_4:
# 328 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballLeft_6
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_6:
# 328 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballLeft_2
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_9:
# 332 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 333 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_12
# 341 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_13
# 350 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 351 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_12:
# 334 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 335 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 336 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 337 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 338 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 339 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_13:
# 342 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 343 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 344 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 345 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 346 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 347 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1


Woodholme_Lab_EventScript_PokeballCenter::
# 371 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 373 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballCenter_4
Woodholme_Lab_EventScript_PokeballCenter_3:
# 405 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballCenter_1:
# 407 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 408 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballCenter_2:
# 374 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 375 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_0, MSGBOX_YESNO
# 376 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_9
# 400 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 401 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_4:
# 373 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballCenter_6
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_6:
# 373 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballCenter_2
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_9:
# 377 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 378 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_12
# 386 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_13
# 395 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 396 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_12:
# 379 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 381 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 382 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 383 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 384 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_13:
# 387 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 388 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 389 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 390 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 391 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 392 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1


Woodholme_Lab_EventScript_PokeballRight::
# 414 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 416 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballRight_4
Woodholme_Lab_EventScript_PokeballRight_3:
# 448 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballRight_1:
# 451 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 452 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballRight_2:
# 417 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 418 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_0, MSGBOX_YESNO
# 419 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_9
# 443 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 444 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_4:
# 416 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballRight_6
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_6:
# 416 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballRight_2
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_9:
# 420 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 421 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_12
# 429 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_13
# 438 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 439 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_12:
# 422 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 423 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 424 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 425 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 426 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 427 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_13:
# 430 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 431 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 432 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 433 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 434 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 435 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballRight_1


NicknamePartyMon::
# 458 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 459 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 460 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 461 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 462 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 468 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 469 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 470 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 473 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 471 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Woodholme_Lab_EventScript_Red_Text_0:
# 25 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Remember, battle your Pokémon to make\n"
	.string "it stronger and take on the Gym\l"
	.string "Challenge!$"

Woodholme_Lab_EventScript_GivePokedex_Text_0:
# 140 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Here, I use this thing called the\n"
	.string "PokéDex for my research. We are\l"
	.string "dicovering more and more types of\l"
	.string "Pokémon all the time. That's why I need\l"
	.string "your help. Please take this PokéDex and\l"
	.string "help me further my research.$"

Woodholme_Lab_EventScript_GivePokedex_Text_1:
# 142 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

Woodholme_Lab_EventScript_GivePokedex_Text_2:
# 154 "data/maps/Woodholme_Lab/scripts.pory"
	.string "The PokéDex automatically records data\n"
	.string "on Pokémon you've seen. Once you\l"
	.string "capture a Pokémon, the PokéDex will\l"
	.string "also automatically update the record\l"
	.string "with more information. These records\l"
	.string "are sent to myself and to my colleagues\l"
	.string "Professor Oak and Professor Birch,\l"
	.string "both of whom also have their own labs\l"
	.string "where they study Pokémon. In order to\l"
	.string "fill your PokéDex you need to catch wild\l"
	.string "Pokémon using PokéBalls. The PokéMart\l"
	.string "here in Woodholme should have some\l"
	.string "PokéBalls you can purchase.$"

Woodholme_Lab_EventScript_GiveExpShare_Text_0:
# 163 "data/maps/Woodholme_Lab/scripts.pory"
	.string "I also want you to have this. This is an\n"
	.string "Exp. Share which lets you train your\l"
	.string "whole party at once. The Exp. Share can\l"
	.string "be toggled on or off in your Key Items\l"
	.string "pocket of your bag. When toggled on,\l"
	.string "your party Pokémon will receive a share\l"
	.string "of the Experience Points from the\l"
	.string "battle, even if they didn't join the\l"
	.string "battle! Don't forget to turn it on if\l"
	.string "you want all your Pokémon to gain\l"
	.string "experience together!$"

Woodholme_Lab_EventScript_PokeballLeft_Text_0:
# 330 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

Woodholme_Lab_EventScript_PokeballLeft_Text_1:
# 335 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Squirtle!$"

Woodholme_Lab_EventScript_PokeballLeft_Text_2:
# 351 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You don't have room for that.$"

Woodholme_Lab_EventScript_PokeballLeft_Text_3:
# 361 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: You already have a Pokémon. One is\n"
	.string "enough.$"

Woodholme_Lab_EventScript_PokeballCenter_Text_0:
# 375 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Charmander?$"

Woodholme_Lab_EventScript_PokeballCenter_Text_1:
# 380 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Charmander!$"

Woodholme_Lab_EventScript_PokeballRight_Text_0:
# 418 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

Woodholme_Lab_EventScript_PokeballRight_Text_1:
# 423 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Bulbasaur!$"

NicknamePartyMon_Text_0:
# 458 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to give it a nickname?$"

NicknameBoxMon_Text_0:
# 473 "data/maps/Woodholme_Lab/scripts.pory"
	.string "The Pokémon was transferred to the PC.$"

Woodholme_Lab_Text_Red1::
# 38 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Please choose a Pokémon to go with you\n"
	.string "on your adventure.$"

Woodholme_Lab_Text_Red2::
# 43 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Ah, an excellent choice. That certainly\n"
	.string "was one of my favorites too!$"

Woodholme_Lab_Text_GivePokedex::
# 103 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Oh, {PLAYER}, hang on a second! I\n"
	.string "almost forgot.$"

Woodholme_Lab_Text_GivePokedex2::
# 108 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Not only does that PokéDex help us\n"
	.string "understand more about different\l"
	.string "species of Pokémon, but it is also\l"
	.string "useful to helping us understand how\l"
	.string "Pokémon TYPES work. That is where the\l"
	.string "Gym Challenge comes in. There are\l"
	.string "several different types of Pokémon and\l"
	.string "in order to prove that you fully grasp\l"
	.string "how Pokémon types work, you can\l"
	.string "challenge the various Gyms. Each Gym\l"
	.string "will only use Pokémon of a certain type.\l"
	.string "That way, you can show that you master\l"
	.string "that specific type by beating the\l"
	.string "corresponding gym leader. You should\l"
	.string "head up past Route 1 to Serenleaf City,\l"
	.string "where the first Gym Leader in the Gym\l"
	.string "Challenge is waiting.$"

Woodholme_Lab_Text_GiveExpShare::
# 113 "data/maps/Woodholme_Lab/scripts.pory"
	.string "The final thing I wanted to mention is\n"
	.string "that I don't expect you to complete the\l"
	.string "Gym Challenge all on your own. That girl\l"
	.string "you saw leaving before is called May.\l"
	.string "She will be your RIVAL! She also\l"
	.string "received her first Pokémon just now,\l"
	.string "and she will also be attempting the Gym\l"
	.string "Challenge alongside you. I told her to\l"
	.string "wait for you outside so that you can\l"
	.string "get acquainted. A bit of friendly\l"
	.string "rivalry to keep you two motivated eh?\l"
	.string "Hehe. Good luck!$"

Woodholm_Lab_Text_Red_Intro::
# 311 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: Ah! You must be the new trainer\n"
	.string "that just moved in! {PLAYER} is it?\l"
	.string "Welcome! My name is Red. I used to be\l"
	.string "the very best trainer in the world. That\l"
	.string "was long ago, and I've since retired\l"
	.string "from battling Pokémon. Nowadays, I've\l"
	.string "set my sights on a completely different\l"
	.string "challenge... To help new trainers get\l"
	.string "started on their own Pokémon journey!\l"
	.string "{PLAYER}, I want you to choose your\l"
	.string "very own Pokémon friend to take with\l"
	.string "you on your adventure! Inside those\l"
	.string "Pokéballs on the table I have three\l"
	.string "different Pokémon. You may have one of\l"
	.string "them. Are you ready to choose a Pokémon\l"
	.string "for yourself?$"

Woodholme_Lab_Text_RedDialogueYes::
# 315 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Excellent. Go over to the table and\n"
	.string "take the Pokémon you wish to accompany\l"
	.string "you on your journey.$"

Woodholme_Lab_Text_RedDialogueNo::
# 319 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You won't be able to start your Pokémon\n"
	.string "adventure without a Pokémon! Please,\l"
	.string "choose one of the Pokémon.$"

Woodholme_Lab_Text_NotChosen::
# 477 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: It's a tough choice. Think hard\n"
	.string "before making your decision!$"
