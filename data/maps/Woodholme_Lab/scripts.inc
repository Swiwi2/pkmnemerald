Woodholme_Lab_MapScripts::
# 2 "data/maps/Woodholme_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_Lab_OnTransition
	.byte 0


Woodholme_Lab_OnTransition::
	return


Woodholme_Lab_EventScript_Red::
# 18 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 19 "data/maps/Woodholme_Lab/scripts.pory"
	faceplayer
# 21 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_Red_6
Woodholme_Lab_EventScript_Red_5:
# 25 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_WOODHOLME_STATE, 0
	goto_if_ne Woodholme_Lab_EventScript_Red_3
# 31 "data/maps/Woodholme_Lab/scripts.pory"
	faceplayer
# 32 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_Red2
Woodholme_Lab_EventScript_Red_1:
# 34 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 35 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_Red_2:
# 22 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_Red1
	goto Woodholme_Lab_EventScript_Red_1

Woodholme_Lab_EventScript_Red_3:
# 26 "data/maps/Woodholme_Lab/scripts.pory"
	faceplayer
# 27 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_Red_Text_0
	goto Woodholme_Lab_EventScript_Red_1

Woodholme_Lab_EventScript_Red_6:
# 21 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_Red_8
	goto Woodholme_Lab_EventScript_Red_5

Woodholme_Lab_EventScript_Red_8:
# 21 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_Red_2
	goto Woodholme_Lab_EventScript_Red_5


Woodholme_Lab_Trigger_GetPokedexLeft::
# 51 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 52 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, RedMove1
# 53 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 54 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerTurnAround
# 55 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 56 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex
# 57 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 2
# 58 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 59 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_SecondMon
# 60 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveSecondMon
# 61 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 62 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 63 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 64 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 65 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_Trigger_GetPokedexCenter::
# 70 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 71 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, RedMove2
# 72 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 73 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerTurnAround
# 74 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 75 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex
# 76 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 2
# 77 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 78 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_SecondMon
# 79 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveSecondMon
# 80 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 81 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 82 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 83 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 84 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


# 87 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerTurnAround:
# 88 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
	step_end

Woodholme_Lab_Trigger_GetPokedexRight::
# 93 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 94 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, RedMove3
# 95 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 96 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerTurnAround
# 97 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 98 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex
# 99 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 2
# 100 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_FORCE_DOUBLE_WILD
# 101 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 102 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_SecondMon
# 103 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveSecondMon
# 104 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 105 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 106 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 107 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 108 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


# 131 "data/maps/Woodholme_Lab/scripts.pory"
RedMove1:
# 132 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 133 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 133 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 136 "data/maps/Woodholme_Lab/scripts.pory"
RedMove2:
# 137 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 138 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 139 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 140 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 140 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/Woodholme_Lab/scripts.pory"
RedMove3:
# 144 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 145 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 145 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 146 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 147 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 147 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

Woodholme_Lab_EventScript_GiveSecondMon::
# 152 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 153 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GiveSecondMon_Text_0
# 154 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/Woodholme_Lab/scripts.pory"
	message Woodholme_Lab_EventScript_GiveSecondMon_Text_1
# 156 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 157 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_LECHONK, 5
# 158 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 159 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GiveSecondMon_Text_2
# 160 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 161 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_EventScript_GivePokedex::
# 167 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 168 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GivePokedex_Text_0
# 169 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/Woodholme_Lab/scripts.pory"
	message Woodholme_Lab_EventScript_GivePokedex_Text_1
# 171 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 172 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 173 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 174 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 176 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 177 "data/maps/Woodholme_Lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 179 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 180 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 181 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 1
# 182 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GivePokedex_Text_2
# 183 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 184 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_EventScript_GiveExpShare::
# 190 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 191 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GiveExpShare_Text_0
# 192 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data/maps/Woodholme_Lab/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 194 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 195 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 196 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_Trigger_RedIntro1::
# 201 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 202 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter1
# 203 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 204 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 205 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 206 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 207 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 208 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 209 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 210 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 211 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro1_2
# 217 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro1_1:
# 219 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 220 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro1_2:
# 213 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro1_1


Woodholme_Lab_Trigger_RedIntro2::
# 224 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 225 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter2
# 226 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 227 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 228 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 229 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 230 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 231 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 232 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 233 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 234 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro2_2
# 240 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro2_1:
# 242 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 243 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro2_2:
# 236 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro2_1


Woodholme_Lab_Trigger_RedIntro3::
# 247 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 248 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter3
# 249 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 250 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 251 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 252 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 253 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 254 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 255 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 256 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 257 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro3_2
# 263 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro3_1:
# 265 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 266 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro3_2:
# 259 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro3_1


Woodholme_Lab_Trigger_RedIntro4::
# 270 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 271 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter4
# 272 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 273 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 274 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 275 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 276 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 277 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 278 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 279 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 280 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro4_2
# 286 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro4_1:
# 288 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 289 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro4_2:
# 282 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro4_1


# 292 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_MayLeave:
# 293 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 295 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 296 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 297 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 298 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 301 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_RedFaceRight:
# 302 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
	step_end

# 305 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter1:
# 306 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 307 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 307 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 307 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 308 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 309 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 310 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 311 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 311 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 311 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 311 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 312 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 313 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 316 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter2:
# 317 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 317 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 317 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 317 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 317 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 317 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 318 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 319 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 322 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter3:
# 323 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 323 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 323 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 323 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 323 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 323 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 324 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 325 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 326 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 329 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter4:
# 330 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 330 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 330 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 331 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 332 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 332 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 333 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 334 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 334 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 334 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 334 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 335 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 336 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

Woodholme_Lab_EventScript_PokeballLeft::
# 354 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 356 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballLeft_4
Woodholme_Lab_EventScript_PokeballLeft_3:
# 391 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballLeft_1:
# 393 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 394 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballLeft_2:
# 357 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 358 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_0, MSGBOX_YESNO
# 359 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_9
# 385 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 386 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_4:
# 356 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballLeft_6
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_6:
# 356 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballLeft_2
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_9:
# 360 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 361 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_12
# 370 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_13
# 380 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 381 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_12:
# 362 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 363 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 364 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 365 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 366 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 367 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 368 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_13:
# 371 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 372 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 373 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 374 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 375 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 376 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 377 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1


Woodholme_Lab_EventScript_PokeballCenter::
# 401 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 403 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballCenter_4
Woodholme_Lab_EventScript_PokeballCenter_3:
# 437 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballCenter_1:
# 439 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 440 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballCenter_2:
# 404 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 405 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_0, MSGBOX_YESNO
# 406 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_9
# 432 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 433 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_4:
# 403 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballCenter_6
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_6:
# 403 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballCenter_2
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_9:
# 407 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 408 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_12
# 417 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_13
# 427 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 428 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_12:
# 409 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 410 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 411 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 412 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 413 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 414 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 415 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_13:
# 418 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 419 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 420 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 421 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 422 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 423 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 424 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1


Woodholme_Lab_EventScript_PokeballRight::
# 446 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 448 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballRight_4
Woodholme_Lab_EventScript_PokeballRight_3:
# 482 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballRight_1:
# 485 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 486 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballRight_2:
# 449 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 450 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_0, MSGBOX_YESNO
# 451 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_9
# 477 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 478 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_4:
# 448 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballRight_6
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_6:
# 448 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballRight_2
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_9:
# 452 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 453 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_12
# 462 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_13
# 472 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 473 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_12:
# 454 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 455 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 456 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 457 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 458 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 459 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 460 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_13:
# 463 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 464 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 465 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 466 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 467 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 468 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 469 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballRight_1


NicknamePartyMon::
# 492 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 493 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 494 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 495 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 496 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 502 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 503 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 504 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 507 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 505 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Woodholme_Lab_EventScript_Red_Text_0:
# 27 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Remember, battle your Pokémon to make\n"
	.string "it stronger and take on the Gym\l"
	.string "Challenge!$"

Woodholme_Lab_EventScript_GiveSecondMon_Text_0:
# 153 "data/maps/Woodholme_Lab/scripts.pory"
	.string "In order to be safe, you'll need another\n"
	.string "Pokémon to accompany your new friend.\l"
	.string "Here, take this one.$"

Woodholme_Lab_EventScript_GiveSecondMon_Text_1:
# 155 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received a Lechonk!$"

Woodholme_Lab_EventScript_GiveSecondMon_Text_2:
# 159 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Feel free to replace your Pokémon with\n"
	.string "new ones that you catch.$"

Woodholme_Lab_EventScript_GivePokedex_Text_0:
# 168 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Secondly, I use this thing called the\n"
	.string "PokéDex for my research. Please take\l"
	.string "this PokéDex and help me further my\l"
	.string "research.$"

Woodholme_Lab_EventScript_GivePokedex_Text_1:
# 170 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

Woodholme_Lab_EventScript_GivePokedex_Text_2:
# 182 "data/maps/Woodholme_Lab/scripts.pory"
	.string "The PokéDex automatically records data\n"
	.string "on Pokémon you've seen. In order to fill\l"
	.string "your PokéDex you need to catch wild\l"
	.string "Pokémon using PokéBalls that can be\l"
	.string "purchased from the PokéMart.$"

Woodholme_Lab_EventScript_GiveExpShare_Text_0:
# 191 "data/maps/Woodholme_Lab/scripts.pory"
	.string "I also want you to have this Exp. Share\n"
	.string "which lets you train your whole party at\l"
	.string "once. Exp. Share can be toggled on or\l"
	.string "off in your Key Items pocket of your\l"
	.string "bag.$"

Woodholme_Lab_EventScript_PokeballLeft_Text_0:
# 358 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

Woodholme_Lab_EventScript_PokeballLeft_Text_1:
# 363 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Quaxly!$"

Woodholme_Lab_EventScript_PokeballLeft_Text_2:
# 381 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You don't have room for that.$"

Woodholme_Lab_EventScript_PokeballLeft_Text_3:
# 391 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: You already have a Pokémon. One is\n"
	.string "enough.$"

Woodholme_Lab_EventScript_PokeballCenter_Text_0:
# 405 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Litten?$"

Woodholme_Lab_EventScript_PokeballCenter_Text_1:
# 410 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Litten!$"

Woodholme_Lab_EventScript_PokeballRight_Text_0:
# 450 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Grookey?$"

Woodholme_Lab_EventScript_PokeballRight_Text_1:
# 455 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Grookey!$"

NicknamePartyMon_Text_0:
# 492 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to give it a nickname?$"

NicknameBoxMon_Text_0:
# 507 "data/maps/Woodholme_Lab/scripts.pory"
	.string "The Pokémon was transferred to the PC.$"

Woodholme_Lab_Text_Red1::
# 40 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Please choose a Pokémon to go with you\n"
	.string "on your adventure.$"

Woodholme_Lab_Text_Red2::
# 45 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Ah, an excellent choice. That certainly\n"
	.string "was one of my favorites too!$"

Woodholme_Lab_Text_GivePokedex::
# 112 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Oh, {PLAYER}, hang on a second! I\n"
	.string "almost forgot.$"

Woodholme_Lab_Text_SecondMon::
# 117 "data/maps/Woodholme_Lab/scripts.pory"
	.string "There are a few more things we need to\n"
	.string "cover before you head out. Firstly,\l"
	.string "most Pokémon battles today are two\l"
	.string "versus two. You can't realistically\l"
	.string "command more than two Pokémon at once,\l"
	.string "but two is very doable!$"

Woodholme_Lab_Text_GivePokedex2::
# 122 "data/maps/Woodholme_Lab/scripts.pory"
	.string "That PokéDex is also useful to helping\n"
	.string "us understand how Pokémon TYPES work.\l"
	.string "There are several different types of\l"
	.string "Pokémon and in order to prove that you\l"
	.string "fully grasp how Pokémon types work, you\l"
	.string "can challenge Gyms. You should head up\l"
	.string "past Route 1 to Serenleaf City, where\l"
	.string "the first Gym Leader is waiting.$"

Woodholme_Lab_Text_GiveExpShare::
# 127 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Finally, I don't expect you to complete\n"
	.string "the Gym Challenge all on your own. That\l"
	.string "girl you saw leaving before is May. She\l"
	.string "will be your RIVAL! She also received\l"
	.string "her first Pokémon just now, and will\l"
	.string "also be attempting the Gym Challenge\l"
	.string "alongside you. I told her to wait\l"
	.string "outside so that you can get\l"
	.string "acquainted. A bit of friendly rivalry to\l"
	.string "keep you two motivated eh? Hehe. Good\l"
	.string "luck!$"

Woodholm_Lab_Text_Red_Intro::
# 339 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: Ah! You must be the new trainer\n"
	.string "that just moved in! {PLAYER} is it?\l"
	.string "Welcome! My name is Red. I used to be\l"
	.string "the very best trainer in the world.\l"
	.string "Nowadays, I've set my sights on a\l"
	.string "completely different challenge... To\l"
	.string "help new trainers get started on their\l"
	.string "own Pokémon journey! {PLAYER}, I want\l"
	.string "you to choose your very own Pokémon\l"
	.string "friend to take with you on your\l"
	.string "adventure! Inside those Pokéballs on\l"
	.string "the table I have three different\l"
	.string "Pokémon. You may have one of them. Are\l"
	.string "you ready to choose a Pokémon for\l"
	.string "yourself?$"

Woodholme_Lab_Text_RedDialogueYes::
# 343 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Excellent. Go over to the table and\n"
	.string "take the Pokémon you wish to accompany\l"
	.string "you on your journey.$"

Woodholme_Lab_Text_RedDialogueNo::
# 347 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You won't be able to start your Pokémon\n"
	.string "adventure without a Pokémon! Please,\l"
	.string "choose one of the Pokémon.$"

Woodholme_Lab_Text_NotChosen::
# 511 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: It's a tough choice. Think hard\n"
	.string "before making your decision!$"
