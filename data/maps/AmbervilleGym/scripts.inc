AmbervilleGym_MapScripts::
# 2 "data/maps/AmbervilleGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AmbervilleGym_OnTransition
	.byte 0


AmbervilleGym_OnTransition::
# 11 "data/maps/AmbervilleGym/scripts.pory"
	call AmbervilleGym_EventScript_SetupGymBattle
	return


AmbervilleGym_EventScript_SetupGymBattle::
# 16 "data/maps/AmbervilleGym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, AmbervilleGym_EventScript_SetupGymBattle_1
# 20 "data/maps/AmbervilleGym/scripts.pory"
	setvar VAR_AMBERVILLE_GYM_STATE, 1
	return

AmbervilleGym_EventScript_SetupGymBattle_1:
# 17 "data/maps/AmbervilleGym/scripts.pory"
	setvar VAR_AMBERVILLE_GYM_STATE, 0
	return


AmbervilleGym_EventScript_Leader::
# 25 "data/maps/AmbervilleGym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, AmbervilleGym_LeaderIntro, AmbervilleGym_LeaderOutro, AmbervilleGym_EventScript_Battle1Over
# 26 "data/maps/AmbervilleGym/scripts.pory"
	msgbox AmbervilleGym_LeaderDialogue_State1
# 27 "data/maps/AmbervilleGym/scripts.pory"
	release
	end


AmbervilleGym_EventScript_Battle1Over::
# 32 "data/maps/AmbervilleGym/scripts.pory"
	lock
# 33 "data/maps/AmbervilleGym/scripts.pory"
	msgbox AmbervilleGym_Heretakethis
# 34 "data/maps/AmbervilleGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 35 "data/maps/AmbervilleGym/scripts.pory"
	message AmbervilleGym_EventScript_Battle1Over_Text_0
# 36 "data/maps/AmbervilleGym/scripts.pory"
	waitfanfare
# 37 "data/maps/AmbervilleGym/scripts.pory"
	closemessage
# 38 "data/maps/AmbervilleGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 39 "data/maps/AmbervilleGym/scripts.pory"
	setvar VAR_AMBERVILLE_GYM_STATE, 1
# 40 "data/maps/AmbervilleGym/scripts.pory"
	goto AmbervilleGym_EventScript_GiveRockSmash
# 41 "data/maps/AmbervilleGym/scripts.pory"
	release
	end


AmbervilleGym_EventScript_GiveRockSmash::
# 46 "data/maps/AmbervilleGym/scripts.pory"
	lock
# 47 "data/maps/AmbervilleGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/AmbervilleGym/scripts.pory"
	giveitem ITEM_HM06
# 49 "data/maps/AmbervilleGym/scripts.pory"
	waitfanfare
# 50 "data/maps/AmbervilleGym/scripts.pory"
	closemessage
# 51 "data/maps/AmbervilleGym/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 52 "data/maps/AmbervilleGym/scripts.pory"
	msgbox AmbervilleGym_ExplainRockSmash
# 53 "data/maps/AmbervilleGym/scripts.pory"
	release
	return


AmbervilleGym_EventScript_Battle1Over_Text_0:
# 35 "data/maps/AmbervilleGym/scripts.pory"
	.string "{PLAYER} received the SECOND BADGE!$"

AmbervilleGym_ExplainRockSmash::
# 57 "data/maps/AmbervilleGym/scripts.pory"
	.string "This HM contains Rock Smash. Rock\n"
	.string "Smash lets your Pokémon smash small\l"
	.string "boulders that in your way! Use it to\l"
	.string "open up areas that previously weren't\l"
	.string "accessible.$"

AmbervilleGym_LeaderIntro::
# 61 "data/maps/AmbervilleGym/scripts.pory"
	.string "Hello!$"

AmbervilleGym_LeaderOutro::
# 65 "data/maps/AmbervilleGym/scripts.pory"
	.string "Nice job!$"

AmbervilleGym_LeaderDialogue_State1::
# 69 "data/maps/AmbervilleGym/scripts.pory"
	.string "Nice!$"

AmbervilleGym_Heretakethis::
# 73 "data/maps/AmbervilleGym/scripts.pory"
	.string "Here, take this BADGE!$"
