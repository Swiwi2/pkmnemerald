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


Route2_EventScript_Trainer_Sawyer::
# 17 "data/maps/Route2/scripts.pory"
	trainerbattle_double TRAINER_SAWYER_1, Route2_SawyerIntro, Route2_SawyerOutro, Route2_NotEnoughPokemon
# 18 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Trainer_Sawyer_Text_0, MSGBOX_NPC
# 19 "data/maps/Route2/scripts.pory"
	release
	end


Route2_EventScript_Trainer_Gabrielle::
# 24 "data/maps/Route2/scripts.pory"
	trainerbattle_double TRAINER_GABRIELLE_1, Route2_GabrielleIntro, Route2_GabrielleOutro, Route2_NotEnoughPokemon
# 25 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Trainer_Gabrielle_Text_0, MSGBOX_NPC
# 26 "data/maps/Route2/scripts.pory"
	release
	end


Route2_EventScript_Sign1::
# 59 "data/maps/Route2/scripts.pory"
	lock
# 60 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Sign1_Text_0
# 61 "data/maps/Route2/scripts.pory"
	release
	return


Route2_EventScript_Trainer_Marcel_Text_0:
# 11 "data/maps/Route2/scripts.pory"
	.string "Hmm. Guess I need to train more...$"

Route2_EventScript_Trainer_Sawyer_Text_0:
# 18 "data/maps/Route2/scripts.pory"
	.string "I need to study to become strong like\n"
	.string "you.$"

Route2_EventScript_Trainer_Gabrielle_Text_0:
# 25 "data/maps/Route2/scripts.pory"
	.string "Go away, meanie!$"

Route2_EventScript_Sign1_Text_0:
# 60 "data/maps/Route2/scripts.pory"
	.string "Routes 1 & 2, connecting Woodholme City\n"
	.string "and Serenleaf City.$"

Route2_MarcelIntro::
# 30 "data/maps/Route2/scripts.pory"
	.string "Yo, kid! Let's have a quick battle!$"

Route2_MarcelOutro::
# 34 "data/maps/Route2/scripts.pory"
	.string "What, I lost?$"

Route2_SawyerIntro::
# 38 "data/maps/Route2/scripts.pory"
	.string "I'm a student at the school! We're\n"
	.string "learning about Pokémon!$"

Route2_SawyerOutro::
# 42 "data/maps/Route2/scripts.pory"
	.string "Maybe I need to study more...$"

Route2_GabrielleIntro::
# 46 "data/maps/Route2/scripts.pory"
	.string "Girls can be Pokémon trainers too you\n"
	.string "know!$"

Route2_GabrielleOutro::
# 50 "data/maps/Route2/scripts.pory"
	.string "You should take it easy on a girl like\n"
	.string "me!$"

Route2_NotEnoughPokemon::
# 54 "data/maps/Route2/scripts.pory"
	.string "You'll need to have at least TWO\n"
	.string "Pokémon if you want to battle US!$"
