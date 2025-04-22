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
	waitmessage
# 101 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_SecondMon
# 102 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveSecondMon
# 103 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 104 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 105 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 106 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 107 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


# 130 "data/maps/Woodholme_Lab/scripts.pory"
RedMove1:
# 131 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 132 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 132 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 135 "data/maps/Woodholme_Lab/scripts.pory"
RedMove2:
# 136 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 137 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 138 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 139 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 139 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 142 "data/maps/Woodholme_Lab/scripts.pory"
RedMove3:
# 143 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 144 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 144 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 145 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 146 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 146 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

Woodholme_Lab_EventScript_GiveSecondMon::
# 151 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 152 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GiveSecondMon_Text_0
# 153 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 154 "data/maps/Woodholme_Lab/scripts.pory"
	message Woodholme_Lab_EventScript_GiveSecondMon_Text_1
# 155 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 156 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_LECHONK, 5
# 157 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 158 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GiveSecondMon_Text_2
# 159 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 160 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_EventScript_GivePokedex::
# 166 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 167 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GivePokedex_Text_0
# 168 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 169 "data/maps/Woodholme_Lab/scripts.pory"
	message Woodholme_Lab_EventScript_GivePokedex_Text_1
# 170 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 171 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 172 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 173 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 174 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 175 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 176 "data/maps/Woodholme_Lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 177 "data/maps/Woodholme_Lab/scripts.pory"
	special EnableNationalPokedex
# 178 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 179 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 180 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 1
# 181 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GivePokedex_Text_2
# 182 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 183 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_EventScript_GiveExpShare::
# 189 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 190 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GiveExpShare_Text_0
# 191 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/Woodholme_Lab/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 193 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 194 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 195 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_Trigger_RedIntro1::
# 200 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 201 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter1
# 202 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 203 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 204 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 205 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 206 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 207 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 208 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 209 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 210 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro1_2
# 216 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro1_1:
# 218 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 219 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro1_2:
# 212 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro1_1


Woodholme_Lab_Trigger_RedIntro2::
# 223 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 224 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter2
# 225 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 226 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 227 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 228 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 229 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 230 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 231 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 232 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 233 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro2_2
# 239 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro2_1:
# 241 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 242 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro2_2:
# 235 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro2_1


Woodholme_Lab_Trigger_RedIntro3::
# 246 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 247 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter3
# 248 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 249 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 250 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 251 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 252 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 253 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 254 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 255 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 256 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro3_2
# 262 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro3_1:
# 264 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 265 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro3_2:
# 258 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro3_1


Woodholme_Lab_Trigger_RedIntro4::
# 269 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 270 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter4
# 271 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 272 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 273 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 274 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 275 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 276 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 277 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 278 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 279 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro4_2
# 285 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro4_1:
# 287 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 288 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro4_2:
# 281 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro4_1


# 291 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_MayLeave:
# 292 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 293 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 293 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 293 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 293 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 293 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 295 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 296 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 297 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 300 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_RedFaceRight:
# 301 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
	step_end

# 304 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter1:
# 305 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 306 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 306 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 306 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 307 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 308 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 309 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 310 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 310 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 310 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 310 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 311 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 312 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 315 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter2:
# 316 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 316 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 316 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 316 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 316 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 316 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 317 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 318 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 321 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter3:
# 322 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 322 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 322 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 322 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 322 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 322 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 323 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 324 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 325 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 328 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter4:
# 329 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 329 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 329 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 330 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 331 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 331 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 332 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 333 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 333 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 333 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 333 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 334 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 335 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

Woodholme_Lab_EventScript_PokeballLeft::
# 353 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 355 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballLeft_4
Woodholme_Lab_EventScript_PokeballLeft_3:
# 390 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballLeft_1:
# 392 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 393 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballLeft_2:
# 356 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 357 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_0, MSGBOX_YESNO
# 358 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_9
# 384 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 385 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_4:
# 355 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballLeft_6
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_6:
# 355 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballLeft_2
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_9:
# 359 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 360 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_12
# 369 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_13
# 379 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 380 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_12:
# 361 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 362 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 363 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 364 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 365 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 366 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 367 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_13:
# 370 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 371 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 372 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 373 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 374 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 375 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 376 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1


Woodholme_Lab_EventScript_PokeballCenter::
# 400 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 402 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballCenter_4
Woodholme_Lab_EventScript_PokeballCenter_3:
# 436 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballCenter_1:
# 438 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 439 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballCenter_2:
# 403 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 404 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_0, MSGBOX_YESNO
# 405 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_9
# 431 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 432 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_4:
# 402 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballCenter_6
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_6:
# 402 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballCenter_2
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_9:
# 406 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 407 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_12
# 416 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_13
# 426 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 427 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_12:
# 408 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 409 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 410 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 411 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 412 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 413 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 414 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_13:
# 417 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 418 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 419 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 420 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 421 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 422 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 423 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1


Woodholme_Lab_EventScript_PokeballRight::
# 445 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 447 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballRight_4
Woodholme_Lab_EventScript_PokeballRight_3:
# 481 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballRight_1:
# 484 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 485 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballRight_2:
# 448 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 449 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_0, MSGBOX_YESNO
# 450 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_9
# 476 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 477 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_4:
# 447 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballRight_6
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_6:
# 447 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballRight_2
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_9:
# 451 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 452 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_12
# 461 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_13
# 471 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 472 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_12:
# 453 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 454 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 455 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 456 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 457 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 458 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 459 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_13:
# 462 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 463 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 464 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 465 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 466 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 467 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 468 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballRight_1


NicknamePartyMon::
# 491 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 492 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 493 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 494 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 495 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 501 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 502 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 503 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 506 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 504 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Woodholme_Lab_EventScript_Red_Text_0:
# 27 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Remember, battle your Pokémon to make\n"
	.string "it stronger and take on the Gym\l"
	.string "Challenge!$"

Woodholme_Lab_EventScript_GiveSecondMon_Text_0:
# 152 "data/maps/Woodholme_Lab/scripts.pory"
	.string "In order to be safe, you'll need another\n"
	.string "Pokémon to accompany your new friend.\l"
	.string "Here, take this one.$"

Woodholme_Lab_EventScript_GiveSecondMon_Text_1:
# 154 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received a Lechonk!$"

Woodholme_Lab_EventScript_GiveSecondMon_Text_2:
# 158 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Once you've gotten the hang of\n"
	.string "battling you can catch some more\l"
	.string "Pokémon to fill out your party. Feel\l"
	.string "free to replace your Pokémon with new\l"
	.string "ones that you catch.$"

Woodholme_Lab_EventScript_GivePokedex_Text_0:
# 167 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Secondly, I use this thing called the\n"
	.string "PokéDex for my research. We are\l"
	.string "dicovering more and more types of\l"
	.string "Pokémon all the time. That's why I need\l"
	.string "your help. Please take this PokéDex and\l"
	.string "help me further my research.$"

Woodholme_Lab_EventScript_GivePokedex_Text_1:
# 169 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

Woodholme_Lab_EventScript_GivePokedex_Text_2:
# 181 "data/maps/Woodholme_Lab/scripts.pory"
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
# 190 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Was that everything? Let's see.... Ah\n"
	.string "yes, I also want you to have this. This\l"
	.string "is an Exp. Share which lets you train\l"
	.string "your whole party at once. The Exp. Share\l"
	.string "can be toggled on or off in your Key\l"
	.string "Items pocket of your bag. When toggled\l"
	.string "on, your party Pokémon will receive a\l"
	.string "share of the Experience Points from\l"
	.string "the battle, even if they didn't join the\l"
	.string "battle! Don't forget to turn it on if\l"
	.string "you want all your Pokémon to gain\l"
	.string "experience together!$"

Woodholme_Lab_EventScript_PokeballLeft_Text_0:
# 357 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

Woodholme_Lab_EventScript_PokeballLeft_Text_1:
# 362 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Quaxly!$"

Woodholme_Lab_EventScript_PokeballLeft_Text_2:
# 380 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You don't have room for that.$"

Woodholme_Lab_EventScript_PokeballLeft_Text_3:
# 390 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: You already have a Pokémon. One is\n"
	.string "enough.$"

Woodholme_Lab_EventScript_PokeballCenter_Text_0:
# 404 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Litten?$"

Woodholme_Lab_EventScript_PokeballCenter_Text_1:
# 409 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Litten!$"

Woodholme_Lab_EventScript_PokeballRight_Text_0:
# 449 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Grookey?$"

Woodholme_Lab_EventScript_PokeballRight_Text_1:
# 454 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Grookey!$"

NicknamePartyMon_Text_0:
# 491 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to give it a nickname?$"

NicknameBoxMon_Text_0:
# 506 "data/maps/Woodholme_Lab/scripts.pory"
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
# 111 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Oh, {PLAYER}, hang on a second! I\n"
	.string "almost forgot.$"

Woodholme_Lab_Text_SecondMon::
# 116 "data/maps/Woodholme_Lab/scripts.pory"
	.string "There are a few more things we need to\n"
	.string "cover before you head out on your\l"
	.string "journey. Firstly, most Pokémon battles\l"
	.string "today are two versus two. Wild Pokémon\l"
	.string "tend to gang up on trainers and so\l"
	.string "trainers have started using two\l"
	.string "Pokémon simultaneously as a result. You\l"
	.string "can't realistically command more than\l"
	.string "two Pokémon at once, but two at a time\l"
	.string "is very doable!$"

Woodholme_Lab_Text_GivePokedex2::
# 121 "data/maps/Woodholme_Lab/scripts.pory"
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
# 126 "data/maps/Woodholme_Lab/scripts.pory"
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
# 338 "data/maps/Woodholme_Lab/scripts.pory"
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
# 342 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Excellent. Go over to the table and\n"
	.string "take the Pokémon you wish to accompany\l"
	.string "you on your journey.$"

Woodholme_Lab_Text_RedDialogueNo::
# 346 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You won't be able to start your Pokémon\n"
	.string "adventure without a Pokémon! Please,\l"
	.string "choose one of the Pokémon.$"

Woodholme_Lab_Text_NotChosen::
# 510 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: It's a tough choice. Think hard\n"
	.string "before making your decision!$"
