LittlerootTown_BirchLab2_MapScripts::
# 2 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BirchLab2_EventScript_BallDefault
	.byte 0


LittlerootTown_BirchLab2_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
	return


LittlerootTown_BirchLab2_EventScript_Red::
# 10 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	lock
# 11 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	faceplayer
# 12 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, LittlerootTown_BirchLab2_EventScript_Red_4
LittlerootTown_BirchLab2_EventScript_Red_3:
# 28 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	faceplayer
# 29 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_Text_Red_2
LittlerootTown_BirchLab2_EventScript_Red_1:
# 31 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	waitmessage
# 32 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	release
	end

LittlerootTown_BirchLab2_EventScript_Red_2:
# 13 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_Text_Red_1, MSGBOX_YESNO
# 14 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BirchLab2_EventScript_Red_9
# 24 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_Red_Text_1
	goto LittlerootTown_BirchLab2_EventScript_Red_1

LittlerootTown_BirchLab2_EventScript_Red_4:
# 12 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_BirchLab2_EventScript_Red_6
	goto LittlerootTown_BirchLab2_EventScript_Red_3

LittlerootTown_BirchLab2_EventScript_Red_6:
# 12 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, LittlerootTown_BirchLab2_EventScript_Red_2
	goto LittlerootTown_BirchLab2_EventScript_Red_3

LittlerootTown_BirchLab2_EventScript_Red_9:
# 15 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_ne LittlerootTown_BirchLab2_EventScript_Red_13
# 19 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
LittlerootTown_BirchLab2_EventScript_Red_12:
# 21 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_Red_Text_0
	goto LittlerootTown_BirchLab2_EventScript_Red_1

LittlerootTown_BirchLab2_EventScript_Red_13:
# 16 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	addvar VAR_UNUSED_0x40F7, 1
	goto LittlerootTown_BirchLab2_EventScript_Red_12


LittlerootTown_BirchLab2_EventScript_PokeballLeft::
# 65 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	lock
# 66 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, LittlerootTown_BirchLab2_EventScript_PokeballLeft_4
LittlerootTown_BirchLab2_EventScript_PokeballLeft_3:
# 97 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_3
LittlerootTown_BirchLab2_EventScript_PokeballLeft_1:
# 99 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	waitmessage
# 100 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	release
	end

LittlerootTown_BirchLab2_EventScript_PokeballLeft_2:
# 67 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 68 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_0, MSGBOX_YESNO
# 69 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BirchLab2_EventScript_PokeballLeft_9
# 91 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	hidemonpic
# 92 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittleRootTown_BirchLab2_NotChosen
	goto LittlerootTown_BirchLab2_EventScript_PokeballLeft_1

LittlerootTown_BirchLab2_EventScript_PokeballLeft_4:
# 66 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_BirchLab2_EventScript_PokeballLeft_6
	goto LittlerootTown_BirchLab2_EventScript_PokeballLeft_3

LittlerootTown_BirchLab2_EventScript_PokeballLeft_6:
# 66 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, LittlerootTown_BirchLab2_EventScript_PokeballLeft_2
	goto LittlerootTown_BirchLab2_EventScript_PokeballLeft_3

LittlerootTown_BirchLab2_EventScript_PokeballLeft_9:
# 70 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 71 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_BirchLab2_EventScript_PokeballLeft_12
# 78 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_BirchLab2_EventScript_PokeballLeft_13
# 86 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	hidemonpic
# 87 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_2
	goto LittlerootTown_BirchLab2_EventScript_PokeballLeft_1

LittlerootTown_BirchLab2_EventScript_PokeballLeft_12:
# 72 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 73 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_1
# 74 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	removeobject 1
# 75 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 76 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_BirchLab2_EventScript_PokeballLeft_1

LittlerootTown_BirchLab2_EventScript_PokeballLeft_13:
# 79 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_1
# 81 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	removeobject 1
# 82 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 83 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	call NicknameBoxMon
	goto LittlerootTown_BirchLab2_EventScript_PokeballLeft_1


LittlerootTown_BirchLab2_EventScript_PokeballCenter::
# 107 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	lock
# 108 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, LittlerootTown_BirchLab2_EventScript_PokeballCenter_4
LittlerootTown_BirchLab2_EventScript_PokeballCenter_3:
# 138 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_3
LittlerootTown_BirchLab2_EventScript_PokeballCenter_1:
# 140 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	waitmessage
# 141 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	release
	end

LittlerootTown_BirchLab2_EventScript_PokeballCenter_2:
# 109 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 110 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballCenter_Text_0, MSGBOX_YESNO
# 111 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BirchLab2_EventScript_PokeballCenter_9
# 133 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	hidemonpic
# 134 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittleRootTown_BirchLab2_NotChosen
	goto LittlerootTown_BirchLab2_EventScript_PokeballCenter_1

LittlerootTown_BirchLab2_EventScript_PokeballCenter_4:
# 108 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_BirchLab2_EventScript_PokeballCenter_6
	goto LittlerootTown_BirchLab2_EventScript_PokeballCenter_3

LittlerootTown_BirchLab2_EventScript_PokeballCenter_6:
# 108 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, LittlerootTown_BirchLab2_EventScript_PokeballCenter_2
	goto LittlerootTown_BirchLab2_EventScript_PokeballCenter_3

LittlerootTown_BirchLab2_EventScript_PokeballCenter_9:
# 112 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 113 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_BirchLab2_EventScript_PokeballCenter_12
# 120 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_BirchLab2_EventScript_PokeballCenter_13
# 128 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	hidemonpic
# 129 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_2
	goto LittlerootTown_BirchLab2_EventScript_PokeballCenter_1

LittlerootTown_BirchLab2_EventScript_PokeballCenter_12:
# 114 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballCenter_Text_1
# 116 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	removeobject 2
# 117 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 118 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_BirchLab2_EventScript_PokeballCenter_1

LittlerootTown_BirchLab2_EventScript_PokeballCenter_13:
# 121 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballCenter_Text_1
# 123 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	removeobject 2
# 124 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 125 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	call NicknameBoxMon
	goto LittlerootTown_BirchLab2_EventScript_PokeballCenter_1


LittlerootTown_BirchLab2_EventScript_PokeballRight::
# 148 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	lock
# 149 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, LittlerootTown_BirchLab2_EventScript_PokeballRight_4
LittlerootTown_BirchLab2_EventScript_PokeballRight_3:
# 179 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_3
LittlerootTown_BirchLab2_EventScript_PokeballRight_1:
# 182 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	waitmessage
# 183 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	release
	end

LittlerootTown_BirchLab2_EventScript_PokeballRight_2:
# 150 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 151 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballRight_Text_0, MSGBOX_YESNO
# 152 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BirchLab2_EventScript_PokeballRight_9
# 174 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	hidemonpic
# 175 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittleRootTown_BirchLab2_NotChosen
	goto LittlerootTown_BirchLab2_EventScript_PokeballRight_1

LittlerootTown_BirchLab2_EventScript_PokeballRight_4:
# 149 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_BirchLab2_EventScript_PokeballRight_6
	goto LittlerootTown_BirchLab2_EventScript_PokeballRight_3

LittlerootTown_BirchLab2_EventScript_PokeballRight_6:
# 149 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, LittlerootTown_BirchLab2_EventScript_PokeballRight_2
	goto LittlerootTown_BirchLab2_EventScript_PokeballRight_3

LittlerootTown_BirchLab2_EventScript_PokeballRight_9:
# 153 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 154 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_BirchLab2_EventScript_PokeballRight_12
# 161 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_BirchLab2_EventScript_PokeballRight_13
# 169 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	hidemonpic
# 170 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_2
	goto LittlerootTown_BirchLab2_EventScript_PokeballRight_1

LittlerootTown_BirchLab2_EventScript_PokeballRight_12:
# 155 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballRight_Text_1
# 157 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	removeobject 3
# 158 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 159 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_BirchLab2_EventScript_PokeballRight_1

LittlerootTown_BirchLab2_EventScript_PokeballRight_13:
# 162 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 163 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox LittlerootTown_BirchLab2_EventScript_PokeballRight_Text_1
# 164 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	removeobject 3
# 165 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 166 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	call NicknameBoxMon
	goto LittlerootTown_BirchLab2_EventScript_PokeballRight_1


NicknamePartyMon::
# 188 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 189 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	hidemonpic
# 190 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 191 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 192 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 197 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
# 198 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	hidemonpic
# 199 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 202 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	msgbox NicknameBoxMon_Text_1
	return

NicknameBoxMon_2:
# 200 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_BirchLab2_EventScript_Red_Text_0:
# 21 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Choose your Pokemon wisely.$"

LittlerootTown_BirchLab2_EventScript_Red_Text_1:
# 24 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Fine, be that way then.$"

LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_0:
# 68 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Do you want to choose Squirtle?$"

LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_1:
# 73 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Received Squirtle!$"

LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_2:
# 87 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "No more room.$"

LittlerootTown_BirchLab2_EventScript_PokeballLeft_Text_3:
# 97 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "RED: You already took a Pokémon!$"

LittlerootTown_BirchLab2_EventScript_PokeballCenter_Text_0:
# 110 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Do you want to choose Charmander?$"

LittlerootTown_BirchLab2_EventScript_PokeballCenter_Text_1:
# 115 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Received Charmander!$"

LittlerootTown_BirchLab2_EventScript_PokeballRight_Text_0:
# 151 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

LittlerootTown_BirchLab2_EventScript_PokeballRight_Text_1:
# 156 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Received Bulbasaur!$"

NicknamePartyMon_Text_0:
# 188 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 197 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_1:
# 202 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Transferred to PC.$"

LittlerootTown_BirchLab2_Text_Red_1::
# 36 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Ah! You must be the new trainer\n"
	.string "that just moved in! Welcome! \p"
	.string "My name is Red. I used to be the\n"
	.string "very best trainer in the world. \p"
	.string "That was long ago, and I've since\n"
	.string "retired from battling Pokémon. \p"
	.string "Nowadays, I've set my sights on\n"
	.string "a completely different challenge... \p"
	.string "To help new trainers get started\n"
	.string "on their own Pokémon journey!\p"
	.string "{PLAYER}, I want you to choose your very\n"
	.string "own Pokémon friend to take with you!\p"
	.string "In these Pokéballs I have three \n"
	.string "different Pokémon. You may have one.\p"
	.string "Are you ready to choose a Pokémon?$"

LittlerootTown_BirchLab2_Text_Red_2::
# 54 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "Ah, an excellent choice. That\n"
	.string "certainly was one of my favorites!\p"
	.string "If I were to give a word of advice,\n"
	.string "I would suggest battling to make your \p"
	.string "new Pokémon stronger. That way, you \n"
	.string "can take on the Pokémon gym challenge!$"

LittleRootTown_BirchLab2_NotChosen::
# 205 "data/maps/LittlerootTown_BirchLab2/scripts.pory"
	.string "RED: It's a tough choice. \n Think hard before deciding!$"
