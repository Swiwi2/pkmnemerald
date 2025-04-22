Route2_MapScripts::
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_EventScript_Transition
	.byte 0


Route2_EventScript_Transition::
	return


Route2_EventScript_Trainer_Marcel::
# 10 "data/maps/Route2/scripts.pory"
	trainerbattle_double TRAINER_MARCEL, Route2_MarcelIntro, Route2_MarcelOutro, Route2_NotEnoughPokemon
# 11 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Trainer_Marcel_Text_0, MSGBOX_NPC
# 12 "data/maps/Route2/scripts.pory"
	release
	end


Route2_EventScript_Trainer_Twins::
# 25 "data/maps/Route2/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route2_TwinsIntro, Route2_TwinsOutro, Route2_NotEnoughPokemon
# 26 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Trainer_Twins_Text_0, MSGBOX_NPC
# 27 "data/maps/Route2/scripts.pory"
	release
	end


Route2_EventScript_Sign1::
# 44 "data/maps/Route2/scripts.pory"
	lock
# 45 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Sign1_Text_0
# 46 "data/maps/Route2/scripts.pory"
	release
	return


Route2_EventScript_Trainer_Marcel_Text_0:
# 11 "data/maps/Route2/scripts.pory"
	.string "Hmm. Guess I need to train more...$"

Route2_EventScript_Trainer_Twins_Text_0:
# 26 "data/maps/Route2/scripts.pory"
	.string "We'll practise some more and maybe we\n"
	.string "can beat you one day!$"

Route2_EventScript_Sign1_Text_0:
# 45 "data/maps/Route2/scripts.pory"
	.string "Routes 1 & 2, connecting Woodholme City\n"
	.string "and Serenleaf City.$"

Route2_MarcelIntro::
# 16 "data/maps/Route2/scripts.pory"
	.string "Yo, kid! Let's have a quick battle!$"

Route2_MarcelOutro::
# 20 "data/maps/Route2/scripts.pory"
	.string "What, I lost?$"

Route2_TwinsIntro::
# 31 "data/maps/Route2/scripts.pory"
	.string "We're twins so we battle together!$"

Route2_TwinsOutro::
# 35 "data/maps/Route2/scripts.pory"
	.string "Wow, you're strong.$"

Route2_NotEnoughPokemon::
# 39 "data/maps/Route2/scripts.pory"
	.string "You'll need to have at least TWO\n"
	.string "Pokémon if you want to battle US!$"
