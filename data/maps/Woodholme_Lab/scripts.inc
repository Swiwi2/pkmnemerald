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
	compare VAR_WOODHOLME_STATE, 1
	goto_if_eq Woodholme_Lab_EventScript_Red_3
# 28 "data/maps/Woodholme_Lab/scripts.pory"
	faceplayer
# 29 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_Red2
Woodholme_Lab_EventScript_Red_1:
# 31 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 32 "data/maps/Woodholme_Lab/scripts.pory"
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
# 48 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 49 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, RedMove1
# 50 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 1
# 51 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex
# 52 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 2
# 53 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 54 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 55 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 56 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 57 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 58 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_Trigger_GetPokedexCenter::
# 63 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 64 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, RedMove2
# 65 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 1
# 66 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex
# 67 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 2
# 68 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 69 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 70 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 71 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 72 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 73 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_Trigger_GetPokedexRight::
# 78 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 79 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, RedMove3
# 80 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 1
# 81 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex
# 82 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 2
# 83 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 84 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GivePokedex
# 85 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GivePokedex2
# 86 "data/maps/Woodholme_Lab/scripts.pory"
	call Woodholme_Lab_EventScript_GiveExpShare
# 87 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_GiveExpShare
# 88 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


# 106 "data/maps/Woodholme_Lab/scripts.pory"
RedMove1:
# 107 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 108 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 108 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/Woodholme_Lab/scripts.pory"
RedMove2:
# 112 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 113 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 114 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 115 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 115 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 118 "data/maps/Woodholme_Lab/scripts.pory"
RedMove3:
# 119 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 120 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 120 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 120 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 121 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 122 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
	step_end

Woodholme_Lab_EventScript_GivePokedex::
# 127 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 128 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GivePokedex_Text_0
# 129 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 130 "data/maps/Woodholme_Lab/scripts.pory"
	message Woodholme_Lab_EventScript_GivePokedex_Text_1
# 131 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 132 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 133 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 134 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 135 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 136 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 137 "data/maps/Woodholme_Lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 138 "data/maps/Woodholme_Lab/scripts.pory"
	special EnableNationalPokedex
# 139 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 140 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 141 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 1
# 142 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GivePokedex_Text_2
# 143 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 144 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_EventScript_GiveExpShare::
# 150 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 151 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_GiveExpShare_Text_0
# 152 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/Woodholme_Lab/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 154 "data/maps/Woodholme_Lab/scripts.pory"
	waitfanfare
# 155 "data/maps/Woodholme_Lab/scripts.pory"
	closemessage
# 156 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return


Woodholme_Lab_Trigger_RedIntro1::
# 161 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 162 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter1
# 163 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 164 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 165 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 166 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 167 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 168 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 169 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 170 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 171 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro1_2
# 177 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro1_1:
# 179 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 180 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro1_2:
# 173 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro1_1


Woodholme_Lab_Trigger_RedIntro2::
# 184 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 185 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter2
# 186 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 187 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 188 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 189 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 190 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 191 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 192 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 193 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 194 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro2_2
# 200 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro2_1:
# 202 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 203 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro2_2:
# 196 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro2_1


Woodholme_Lab_Trigger_RedIntro3::
# 207 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 208 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter3
# 209 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 210 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 211 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 212 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 213 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 214 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 215 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 216 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 217 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro3_2
# 223 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro3_1:
# 225 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 226 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro3_2:
# 219 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro3_1


Woodholme_Lab_Trigger_RedIntro4::
# 230 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 231 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Woodholme_Lab_Movement_PlayerMoveToStarter4
# 232 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 233 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 1, Woodholme_Lab_Movement_RedFaceRight
# 234 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 235 "data/maps/Woodholme_Lab/scripts.pory"
	applymovement 5, Woodholme_Lab_Movement_MayLeave
# 236 "data/maps/Woodholme_Lab/scripts.pory"
	waitmovement 0
# 237 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 5
# 238 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_RIVAL_DISAPPEAR
# 239 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholm_Lab_Text_Red_Intro, MSGBOX_YESNO
# 240 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_Trigger_RedIntro4_2
# 246 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueNo
Woodholme_Lab_Trigger_RedIntro4_1:
# 248 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 249 "data/maps/Woodholme_Lab/scripts.pory"
	release
	return

Woodholme_Lab_Trigger_RedIntro4_2:
# 242 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_RedDialogueYes
	goto Woodholme_Lab_Trigger_RedIntro4_1


# 252 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_MayLeave:
# 253 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 254 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 254 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 254 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 254 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 254 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
# 255 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 256 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 257 "data/maps/Woodholme_Lab/scripts.pory"
	face_down
# 258 "data/maps/Woodholme_Lab/scripts.pory"
	walk_down
	step_end

# 261 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_RedFaceRight:
# 262 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
	step_end

# 265 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter1:
# 266 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 267 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 267 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 267 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 268 "data/maps/Woodholme_Lab/scripts.pory"
	face_right
# 269 "data/maps/Woodholme_Lab/scripts.pory"
	walk_right
# 270 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 271 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 271 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 271 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 271 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 272 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 273 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 276 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter2:
# 277 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 277 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 277 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 277 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 277 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 277 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 278 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 279 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 282 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter3:
# 283 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 283 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
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
	walk_left
# 286 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

# 289 "data/maps/Woodholme_Lab/scripts.pory"
Woodholme_Lab_Movement_PlayerMoveToStarter4:
# 290 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 290 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 290 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 291 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 292 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 292 "data/maps/Woodholme_Lab/scripts.pory"
	walk_left
# 293 "data/maps/Woodholme_Lab/scripts.pory"
	face_up
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 294 "data/maps/Woodholme_Lab/scripts.pory"
	walk_up
# 295 "data/maps/Woodholme_Lab/scripts.pory"
	face_left
# 296 "data/maps/Woodholme_Lab/scripts.pory"
	step_end

Woodholme_Lab_EventScript_PokeballLeft::
# 314 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 316 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballLeft_4
Woodholme_Lab_EventScript_PokeballLeft_3:
# 349 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballLeft_1:
# 351 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 352 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballLeft_2:
# 317 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 318 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_0, MSGBOX_YESNO
# 319 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_9
# 343 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 344 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_4:
# 316 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballLeft_6
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_6:
# 316 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballLeft_2
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_9:
# 320 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 321 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_12
# 329 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_13
# 338 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 339 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_12:
# 322 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 323 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 324 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 325 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 326 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 327 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_13:
# 330 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 331 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 332 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 333 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 334 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 335 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1


Woodholme_Lab_EventScript_PokeballCenter::
# 359 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 361 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballCenter_4
Woodholme_Lab_EventScript_PokeballCenter_3:
# 393 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballCenter_1:
# 395 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 396 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballCenter_2:
# 362 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 363 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_0, MSGBOX_YESNO
# 364 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_9
# 388 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 389 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_4:
# 361 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballCenter_6
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_6:
# 361 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballCenter_2
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_9:
# 365 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 366 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_12
# 374 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_13
# 383 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 384 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_12:
# 367 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 368 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 369 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 370 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 371 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 372 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_13:
# 375 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 376 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 377 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 378 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 379 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 380 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1


Woodholme_Lab_EventScript_PokeballRight::
# 402 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 404 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballRight_4
Woodholme_Lab_EventScript_PokeballRight_3:
# 436 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballRight_1:
# 439 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 440 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballRight_2:
# 405 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 406 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_0, MSGBOX_YESNO
# 407 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_9
# 431 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 432 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_4:
# 404 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballRight_6
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_6:
# 404 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballRight_2
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_9:
# 408 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 409 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_12
# 417 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_13
# 426 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 427 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_12:
# 410 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 411 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 412 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 413 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 414 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 415 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_13:
# 418 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 419 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 420 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 421 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 422 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_WOODHOLME_LAB_STATE, 1
# 423 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballRight_1


NicknamePartyMon::
# 446 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 447 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 448 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 449 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 450 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 456 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
# 457 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 458 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 461 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknameBoxMon_Text_1
	return

NicknameBoxMon_2:
# 459 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Woodholme_Lab_EventScript_Red_Text_0:
# 25 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Remember, battle your Pokémon to make\n"
	.string "it stronger and take on the Gym\l"
	.string "Challenge!$"

Woodholme_Lab_EventScript_GivePokedex_Text_0:
# 128 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Here, I use this thing called the\n"
	.string "PokéDex for my research. We are\l"
	.string "dicovering more and more types of\l"
	.string "Pokémon all the time. That's why I need\l"
	.string "your help. Please take this PokéDex and\l"
	.string "help me further my research.$"

Woodholme_Lab_EventScript_GivePokedex_Text_1:
# 130 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

Woodholme_Lab_EventScript_GivePokedex_Text_2:
# 142 "data/maps/Woodholme_Lab/scripts.pory"
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
# 151 "data/maps/Woodholme_Lab/scripts.pory"
	.string "I also want you to have this. This is an\n"
	.string "Exp. Share which lets you train your\l"
	.string "whole party at once. The Exp. Share can\l"
	.string "be toggled on or off in your Key Items\l"
	.string "pocket of you bag. When toggled on,\l"
	.string "your party Pokémon will receive a share\l"
	.string "of the Experience Points from the\l"
	.string "battle, even if they didn't join the\l"
	.string "battle itself! Don't forget to turn it\l"
	.string "on if you want your Pokémon to gain\l"
	.string "experience more evenly!$"

Woodholme_Lab_EventScript_PokeballLeft_Text_0:
# 318 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

Woodholme_Lab_EventScript_PokeballLeft_Text_1:
# 323 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Squirtle!$"

Woodholme_Lab_EventScript_PokeballLeft_Text_2:
# 339 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You don't have room for that.$"

Woodholme_Lab_EventScript_PokeballLeft_Text_3:
# 349 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: You already took a Pokémon!$"

Woodholme_Lab_EventScript_PokeballCenter_Text_0:
# 363 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Charmander?$"

Woodholme_Lab_EventScript_PokeballCenter_Text_1:
# 368 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Charmander!$"

Woodholme_Lab_EventScript_PokeballRight_Text_0:
# 406 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

Woodholme_Lab_EventScript_PokeballRight_Text_1:
# 411 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Bulbasaur!$"

NicknamePartyMon_Text_0:
# 446 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 456 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_1:
# 461 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Transferred to PC.$"

Woodholme_Lab_Text_Red1::
# 37 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Please choose a Pokémon to go with you\n"
	.string "on your adventure.$"

Woodholme_Lab_Text_Red2::
# 42 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Ah, an excellent choice. That certainly\n"
	.string "was one of my favorites! If I were to\l"
	.string "give a word of advice, I would suggest\l"
	.string "battling to make your new Pokémon\l"
	.string "stronger. That way, you can take on the\l"
	.string "Pokémon gym challenge!$"

Woodholme_Lab_Text_GivePokedex::
# 92 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Oh, {PLAYER}, hang on a second! I\n"
	.string "almost forgot.$"

Woodholme_Lab_Text_GivePokedex2::
# 97 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Not only does the PokéDex help us\n"
	.string "understand more about different\l"
	.string "species of Pokémon, but it is also\l"
	.string "useful to helping us understand how\l"
	.string "Pokémon TYPES work. That is where the\l"
	.string "Gym Challenge comes in. There are\l"
	.string "several different types of Pokémon and\l"
	.string "in order to prove that you fully grasp\l"
	.string "how Pokémon types work, you can\l"
	.string "challenge the various Gyms. Each gym\l"
	.string "will only use Pokémon of a certain type.\l"
	.string "That way, you can show that you master\l"
	.string "that specific type by beating the\l"
	.string "corresponding gym leader. You should\l"
	.string "head up past Route 1 to Serenleaf City,\l"
	.string "where the first Gym Leader in the Gym\l"
	.string "Challenge is waiting.$"

Woodholme_Lab_Text_GiveExpShare::
# 102 "data/maps/Woodholme_Lab/scripts.pory"
	.string "The final thing I wanted to mention is\n"
	.string "that I don't expect you to complete the\l"
	.string "Gym Challenge all on your own. That girl\l"
	.string "you saw leaving before is May. She will\l"
	.string "be your RIVAL! She also received her\l"
	.string "first Pokémon just now, and she will\l"
	.string "also be attempting the Gym Challenge\l"
	.string "alongside you. A bit of friendly rivalry\l"
	.string "to keep you motivated eh? Hehe. Good\l"
	.string "luck!$"

Woodholm_Lab_Text_Red_Intro::
# 299 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Ah! You must be the new trainer that\n"
	.string "just moved in! Welcome! My name is Red. I\l"
	.string "used to be the very best trainer in the\l"
	.string "world. That was long ago, and I've since\l"
	.string "retired from battling Pokémon.\l"
	.string "Nowadays, I've set my sights on a\l"
	.string "completely different challenge... To\l"
	.string "help new trainers get started on their\l"
	.string "own Pokémon journey! {PLAYER}, I want\l"
	.string "you to choose your very own Pokémon\l"
	.string "friend to take with you! In these\l"
	.string "Pokéballs I have three different\l"
	.string "Pokémon. You may have one. Are you\l"
	.string "ready to choose a Pokémon?$"

Woodholme_Lab_Text_RedDialogueYes::
# 303 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Excellent. Make your choice wisely.$"

Woodholme_Lab_Text_RedDialogueNo::
# 307 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You won't be able to start your Pokémon\n"
	.string "adventure without a Pokémon! Please,\l"
	.string "choose a Pokémon.$"

Woodholme_Lab_Text_NotChosen::
# 465 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: It's a tough choice. Think hard\n"
	.string "before deciding!$"
