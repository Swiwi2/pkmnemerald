Woodholme_Lab_MapScripts::
# 2 "data/maps/Woodholme_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_Lab_OnTransition
	.byte 0


Woodholme_Lab_OnTransition::
# 6 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_SELECTION, 0
	return


Woodholme_Lab_EventScript_Red::
# 15 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 16 "data/maps/Woodholme_Lab/scripts.pory"
	faceplayer
# 17 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_Red_4
Woodholme_Lab_EventScript_Red_3:
# 34 "data/maps/Woodholme_Lab/scripts.pory"
	faceplayer
# 36 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_Red2
Woodholme_Lab_EventScript_Red_1:
# 38 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 39 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_Red_2:
# 19 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_Red1, MSGBOX_YESNO
# 20 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_Red_9
# 30 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_Red_Text_1
	goto Woodholme_Lab_EventScript_Red_1

Woodholme_Lab_EventScript_Red_4:
# 17 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_Red_6
	goto Woodholme_Lab_EventScript_Red_3

Woodholme_Lab_EventScript_Red_6:
# 17 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_Red_2
	goto Woodholme_Lab_EventScript_Red_3

Woodholme_Lab_EventScript_Red_9:
# 21 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_STARTER_SELECTION, 2
	goto_if_ne Woodholme_Lab_EventScript_Red_13
# 25 "data/maps/Woodholme_Lab/scripts.pory"
	setvar VAR_STARTER_SELECTION, 0
Woodholme_Lab_EventScript_Red_12:
# 27 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_Red_Text_0
	goto Woodholme_Lab_EventScript_Red_1

Woodholme_Lab_EventScript_Red_13:
# 22 "data/maps/Woodholme_Lab/scripts.pory"
	addvar VAR_STARTER_SELECTION, 1
	goto Woodholme_Lab_EventScript_Red_12


Woodholme_Lab_EventScript_PokeballLeft::
# 56 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 58 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballLeft_4
Woodholme_Lab_EventScript_PokeballLeft_3:
# 89 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballLeft_1:
# 91 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 92 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballLeft_2:
# 59 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 60 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_0, MSGBOX_YESNO
# 61 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_9
# 83 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 84 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_4:
# 58 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballLeft_6
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_6:
# 58 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballLeft_2
	goto Woodholme_Lab_EventScript_PokeballLeft_3

Woodholme_Lab_EventScript_PokeballLeft_9:
# 62 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 63 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_12
# 70 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballLeft_13
# 78 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 79 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_12:
# 64 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 66 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 67 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 68 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1

Woodholme_Lab_EventScript_PokeballLeft_13:
# 71 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 72 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_1
# 73 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 2
# 74 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_SQUIRTLE
# 75 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballLeft_1


Woodholme_Lab_EventScript_PokeballCenter::
# 98 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 100 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballCenter_4
Woodholme_Lab_EventScript_PokeballCenter_3:
# 130 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballCenter_1:
# 132 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 133 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballCenter_2:
# 101 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 102 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_0, MSGBOX_YESNO
# 103 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_9
# 125 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 126 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_4:
# 100 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballCenter_6
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_6:
# 100 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballCenter_2
	goto Woodholme_Lab_EventScript_PokeballCenter_3

Woodholme_Lab_EventScript_PokeballCenter_9:
# 104 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 105 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_12
# 112 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballCenter_13
# 120 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 121 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_12:
# 106 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 107 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 108 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 109 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 110 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1

Woodholme_Lab_EventScript_PokeballCenter_13:
# 113 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballCenter_Text_1
# 115 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 3
# 116 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_CHARMANDER
# 117 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballCenter_1


Woodholme_Lab_EventScript_PokeballRight::
# 138 "data/maps/Woodholme_Lab/scripts.pory"
	lock
# 140 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, Woodholme_Lab_EventScript_PokeballRight_4
Woodholme_Lab_EventScript_PokeballRight_3:
# 170 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_3
Woodholme_Lab_EventScript_PokeballRight_1:
# 173 "data/maps/Woodholme_Lab/scripts.pory"
	waitmessage
# 174 "data/maps/Woodholme_Lab/scripts.pory"
	release
	end

Woodholme_Lab_EventScript_PokeballRight_2:
# 141 "data/maps/Woodholme_Lab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 142 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_0, MSGBOX_YESNO
# 143 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_9
# 165 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 166 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_Text_NotChosen
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_4:
# 140 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, Woodholme_Lab_EventScript_PokeballRight_6
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_6:
# 140 "data/maps/Woodholme_Lab/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, Woodholme_Lab_EventScript_PokeballRight_2
	goto Woodholme_Lab_EventScript_PokeballRight_3

Woodholme_Lab_EventScript_PokeballRight_9:
# 144 "data/maps/Woodholme_Lab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 145 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_12
# 152 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Woodholme_Lab_EventScript_PokeballRight_13
# 160 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 161 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballLeft_Text_2
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_12:
# 146 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 148 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 149 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 150 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknamePartyMon
	goto Woodholme_Lab_EventScript_PokeballRight_1

Woodholme_Lab_EventScript_PokeballRight_13:
# 153 "data/maps/Woodholme_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 154 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox Woodholme_Lab_EventScript_PokeballRight_Text_1
# 155 "data/maps/Woodholme_Lab/scripts.pory"
	removeobject 4
# 156 "data/maps/Woodholme_Lab/scripts.pory"
	setflag FLAG_STARTER_BULBASAUR
# 157 "data/maps/Woodholme_Lab/scripts.pory"
	call NicknameBoxMon
	goto Woodholme_Lab_EventScript_PokeballRight_1


NicknamePartyMon::
# 180 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 181 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 182 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 183 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 184 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 190 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
# 191 "data/maps/Woodholme_Lab/scripts.pory"
	hidemonpic
# 192 "data/maps/Woodholme_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 195 "data/maps/Woodholme_Lab/scripts.pory"
	msgbox NicknameBoxMon_Text_1
	return

NicknameBoxMon_2:
# 193 "data/maps/Woodholme_Lab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Woodholme_Lab_EventScript_Red_Text_0:
# 27 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Choose your Pokémon wisely.$"

Woodholme_Lab_EventScript_Red_Text_1:
# 30 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You won't be able to start your Pokémon\n"
	.string "adventure without a Pokémon!$"

Woodholme_Lab_EventScript_PokeballLeft_Text_0:
# 60 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

Woodholme_Lab_EventScript_PokeballLeft_Text_1:
# 65 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Squirtle!$"

Woodholme_Lab_EventScript_PokeballLeft_Text_2:
# 79 "data/maps/Woodholme_Lab/scripts.pory"
	.string "You don't have room for that.$"

Woodholme_Lab_EventScript_PokeballLeft_Text_3:
# 89 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: You already took a Pokémon!$"

Woodholme_Lab_EventScript_PokeballCenter_Text_0:
# 102 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Charmander?$"

Woodholme_Lab_EventScript_PokeballCenter_Text_1:
# 107 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Charmander!$"

Woodholme_Lab_EventScript_PokeballRight_Text_0:
# 142 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

Woodholme_Lab_EventScript_PokeballRight_Text_1:
# 147 "data/maps/Woodholme_Lab/scripts.pory"
	.string "{PLAYER} received the Bulbasaur!$"

NicknamePartyMon_Text_0:
# 180 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 190 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_1:
# 195 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Transferred to PC.$"

Woodholme_Lab_Text_Red1::
# 44 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Ah! You must be the new trainerthat\n"
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

Woodholme_Lab_Text_Red2::
# 49 "data/maps/Woodholme_Lab/scripts.pory"
	.string "Ah, an excellent choice. That certainly\n"
	.string "was one of my favorites! If I were to\l"
	.string "give a word of advice,I would suggest\l"
	.string "battling to make your new Pokémon\l"
	.string "stronger. That way, you can take on the\l"
	.string "Pokémon gym challenge!$"

Woodholme_Lab_Text_NotChosen::
# 199 "data/maps/Woodholme_Lab/scripts.pory"
	.string "RED: It's a tough choice. Think hard\n"
	.string "before deciding!$"
