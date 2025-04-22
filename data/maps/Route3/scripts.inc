Route3_MapScripts::
# 2 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_OnTransition
	.byte 0


Route3_OnTransition::
	return


Route3_EventScript_Trainer_Victor::
# 10 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_VICTOR, Route3_VictorIntro, Route3_VictorOutro, Route3_NotEnoughPokemon
# 11 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trainer_Victor_Text_0, MSGBOX_NPC
# 12 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_Trainer_Miguel::
# 16 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_MIGUEL_1, Route3_MiguelIntro, Route3_MiguelOutro, Route3_NotEnoughPokemon
# 17 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trainer_Miguel_Text_0, MSGBOX_NPC
# 18 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_Trainer_Victor_Text_0:
# 11 "data/maps/Route3/scripts.pory"
	.string "I just love Pokémon!$"

Route3_EventScript_Trainer_Miguel_Text_0:
# 17 "data/maps/Route3/scripts.pory"
	.string "Bah, I'll win next time.$"

Route3_NotEnoughPokemon::
# 21 "data/maps/Route3/scripts.pory"
	.string "You don't have enough Pokémon for a\n"
	.string "battle! Come back later.$"

Route3_VictorIntro::
# 25 "data/maps/Route3/scripts.pory"
	.string "I'm a huge fan of Pokémon! Let's battle.$"

Route3_VictorOutro::
# 29 "data/maps/Route3/scripts.pory"
	.string "I'm not very good at battling, though. I\n"
	.string "guess I'll stick to collecting them.$"

Route3_MiguelIntro::
# 33 "data/maps/Route3/scripts.pory"
	.string "Let us have a quick Pokémon match!$"

Route3_MiguelOutro::
# 37 "data/maps/Route3/scripts.pory"
	.string "Well, that was quick indeed. Darn it!$"
