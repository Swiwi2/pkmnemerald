SerenleafGym_MapScripts::
# 2 "data/maps/SerenleafGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SerenleafGym_OnTransition
	.byte 0


SerenleafGym_OnTransition::
# 12 "data/maps/SerenleafGym/scripts.pory"
	call SerenleafGym_EventScript_SetupGymBattle
	end


SerenleafGym_EventScript_SetupGymBattle::
# 18 "data/maps/SerenleafGym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, SerenleafGym_EventScript_SetupGymBattle_2
# 22 "data/maps/SerenleafGym/scripts.pory"
	setvar VAR_SERENLEAF_GYM_STATE, 1
SerenleafGym_EventScript_SetupGymBattle_1:
	return

SerenleafGym_EventScript_SetupGymBattle_2:
# 19 "data/maps/SerenleafGym/scripts.pory"
	setvar VAR_SERENLEAF_GYM_STATE, 0
	goto SerenleafGym_EventScript_SetupGymBattle_1


SerenleafGym_EventScript_Leader::
# 28 "data/maps/SerenleafGym/scripts.pory"
	trainerbattle_double TRAINER_BRAWLY_1, SerenleafGym_LeaderIntro, SerenleafGym_LeaderOutro, SerenleafGym_NotEnoughPokemon, SerenleafGym_EventScript_Battle1Over
# 29 "data/maps/SerenleafGym/scripts.pory"
	msgbox SerenleafGym_LeaderDialogue_State1
# 30 "data/maps/SerenleafGym/scripts.pory"
	release
	end


SerenleafGym_EventScript_Battle1Over::
# 35 "data/maps/SerenleafGym/scripts.pory"
	lock
# 36 "data/maps/SerenleafGym/scripts.pory"
	msgbox SerenleafGym_Heretakethis
# 37 "data/maps/SerenleafGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 38 "data/maps/SerenleafGym/scripts.pory"
	message SerenleafGym_EventScript_Battle1Over_Text_0
# 39 "data/maps/SerenleafGym/scripts.pory"
	waitfanfare
# 40 "data/maps/SerenleafGym/scripts.pory"
	closemessage
# 41 "data/maps/SerenleafGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 42 "data/maps/SerenleafGym/scripts.pory"
	setvar VAR_SERENLEAF_GYM_STATE, 1
# 43 "data/maps/SerenleafGym/scripts.pory"
	goto SerenleafGym_EventScript_GiveCut
# 44 "data/maps/SerenleafGym/scripts.pory"
	release
	end


SerenleafGym_EventScript_GiveCut::
# 49 "data/maps/SerenleafGym/scripts.pory"
	lock
# 50 "data/maps/SerenleafGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/SerenleafGym/scripts.pory"
	giveitem ITEM_HM01
# 52 "data/maps/SerenleafGym/scripts.pory"
	waitfanfare
# 53 "data/maps/SerenleafGym/scripts.pory"
	closemessage
# 54 "data/maps/SerenleafGym/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 55 "data/maps/SerenleafGym/scripts.pory"
	msgbox SerenleafGym_ExplainCut
# 56 "data/maps/SerenleafGym/scripts.pory"
	release
	return


SerenleafGym_EventScript_Battle1Over_Text_0:
# 38 "data/maps/SerenleafGym/scripts.pory"
	.string "{PLAYER} received the FIRST BADGE!$"

SerenleafGym_NotEnoughPokemon::
# 60 "data/maps/SerenleafGym/scripts.pory"
	.string "You don't have enough Pokémon. Come\n"
	.string "back with at least two Pokémon!$"

SerenleafGym_LeaderIntro::
# 63 "data/maps/SerenleafGym/scripts.pory"
	.string "Hello there. My name is Brawly and I run\n"
	.string "the Serenleaf City Gym! I am one of 8\l"
	.string "GYM leaders that you should challenge\l"
	.string "in order to prove that you're a\l"
	.string "well-rounded and capable trainer. My\l"
	.string "speciality is GRASS type Pokémon! You'd\l"
	.string "better have a FIRE or FLYING type\l"
	.string "Pokémon with you! But enough talk -\l"
	.string "let's battle!$"

SerenleafGym_LeaderOutro::
# 67 "data/maps/SerenleafGym/scripts.pory"
	.string "Nice job! That was a real battle! You'd\n"
	.string "better head EAST to Amberville City\l"
	.string "where the next gym challenge awaits!$"

SerenleafGym_LeaderDialogue_State1::
# 71 "data/maps/SerenleafGym/scripts.pory"
	.string "You'd better head EAST to Amberville\n"
	.string "City where the next gym challenge\l"
	.string "awaits!$"

SerenleafGym_ExplainCut::
# 75 "data/maps/SerenleafGym/scripts.pory"
	.string "The HM contains CUT. CUT is a move that\n"
	.string "allows you to chop down certain trees!\l"
	.string "You should try it on the trees between\l"
	.string "Serenleaf City and Woodholme City!$"

SerenleafGym_Heretakethis::
# 79 "data/maps/SerenleafGym/scripts.pory"
	.string "Here you go, you earned this. This is the\n"
	.string "FIRST BADGE! It proves that you have\l"
	.string "bested me in battle and are now one\l"
	.string "step closer toward completing the\l"
	.string "Pokémon GYM CHALLENGE.$"
