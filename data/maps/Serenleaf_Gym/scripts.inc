Serenleaf_Gym_MapScripts::
# 2 "data/maps/Serenleaf_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Serenleaf_Gym_OnTransition
	.byte 0


Serenleaf_Gym_OnTransition::
# 10 "data/maps/Serenleaf_Gym/scripts.pory"
	call Serenleaf_Gym_EventScript_SetupGymBattle
	return


Serenleaf_Gym_EventScript_SetupGymBattle::
# 15 "data/maps/Serenleaf_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Serenleaf_Gym_EventScript_SetupGymBattle_1
# 19 "data/maps/Serenleaf_Gym/scripts.pory"
	setvar VAR_SERENLEAF_GYM_STATE, 1
	return

Serenleaf_Gym_EventScript_SetupGymBattle_1:
# 16 "data/maps/Serenleaf_Gym/scripts.pory"
	setvar VAR_SERENLEAF_GYM_STATE, 0
	return


Serenleaf_Gym_EventScript_Leader::
# 24 "data/maps/Serenleaf_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, Gabby_Intro, Gabby_Outro, Serenleaf_Gym_EventScript_Battle1Over
# 25 "data/maps/Serenleaf_Gym/scripts.pory"
	msgbox LeaderDialogueState1
# 26 "data/maps/Serenleaf_Gym/scripts.pory"
	release
	end


Serenleaf_Gym_EventScript_Battle1Over::
# 31 "data/maps/Serenleaf_Gym/scripts.pory"
	lock
# 32 "data/maps/Serenleaf_Gym/scripts.pory"
	msgbox Heretakethis
# 33 "data/maps/Serenleaf_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 34 "data/maps/Serenleaf_Gym/scripts.pory"
	message Serenleaf_Gym_EventScript_Battle1Over_Text_0
# 35 "data/maps/Serenleaf_Gym/scripts.pory"
	waitfanfare
# 36 "data/maps/Serenleaf_Gym/scripts.pory"
	closemessage
# 37 "data/maps/Serenleaf_Gym/scripts.pory"
	setflag FLAG_SERENLEAF_GYM_BATTLE1
# 38 "data/maps/Serenleaf_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 39 "data/maps/Serenleaf_Gym/scripts.pory"
	setvar VAR_SERENLEAF_GYM_STATE, 1
# 40 "data/maps/Serenleaf_Gym/scripts.pory"
	goto Serenleaf_Gym_EventScript_GiveCut
# 41 "data/maps/Serenleaf_Gym/scripts.pory"
	release
	end


Serenleaf_Gym_EventScript_GiveCut::
# 46 "data/maps/Serenleaf_Gym/scripts.pory"
	lock
# 47 "data/maps/Serenleaf_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/Serenleaf_Gym/scripts.pory"
	giveitem ITEM_HM01
# 49 "data/maps/Serenleaf_Gym/scripts.pory"
	waitfanfare
# 50 "data/maps/Serenleaf_Gym/scripts.pory"
	closemessage
# 51 "data/maps/Serenleaf_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 52 "data/maps/Serenleaf_Gym/scripts.pory"
	msgbox ExplainCut
# 53 "data/maps/Serenleaf_Gym/scripts.pory"
	release
	return


Serenleaf_Gym_EventScript_Battle1Over_Text_0:
# 34 "data/maps/Serenleaf_Gym/scripts.pory"
	.string "{PLAYER} received the GRASS BADGE!$"

Gabby_Intro::
# 57 "data/maps/Serenleaf_Gym/scripts.pory"
	.string "Hello there. My name is Gabby and I run\n"
	.string "the Serenleaf City Gym! I am one of 8\l"
	.string "GYM leaders that you should challenge\l"
	.string "in order to prove that you're a\l"
	.string "well-rounded and capable trainer. I\l"
	.string "hope you've prepared - let's battle!$"

Gabby_Outro::
# 61 "data/maps/Serenleaf_Gym/scripts.pory"
	.string "Nice job! That was a real battle!$"

LeaderDialogueState1::
# 65 "data/maps/Serenleaf_Gym/scripts.pory"
	.string "Nice job!$"

ExplainCut::
# 69 "data/maps/Serenleaf_Gym/scripts.pory"
	.string "The HM contains CUT. CUT is a move that\n"
	.string "allows you to chop down certain trees!\l"
	.string "You should try it on the trees between\l"
	.string "Serenleaf City and Woodholme City!$"

Heretakethis::
# 74 "data/maps/Serenleaf_Gym/scripts.pory"
	.string "Here you go, you earned this. This is the\n"
	.string "GRASS BADGE! It proves that you have\l"
	.string "bested me in battle and are now one\l"
	.string "step closer toward completing the\l"
	.string "Pokémon GYM CHALLENGE.$"
