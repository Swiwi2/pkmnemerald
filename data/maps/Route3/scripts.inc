Route3_MapScripts::
# 2 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_OnTransition
	.byte 0


Route3_OnTransition::
	return


Route3_EventScript_Trainer_Victor::
# 11 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_VICTOR, Route3_VictorIntro, Route3_VictorOutro, Route3_NotEnoughPokemon
# 12 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trainer_Victor_Text_0, MSGBOX_NPC
# 13 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_Trainer_Miguel::
# 18 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_MIGUEL_1, Route3_MiguelIntro, Route3_MiguelOutro, Route3_NotEnoughPokemon
# 19 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trainer_Miguel_Text_0, MSGBOX_NPC
# 20 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_Trainer_Ed::
# 25 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_ED, Route3_EdIntro, Route3_EdOutro, Route3_NotEnoughPokemon
# 26 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trainer_Ed_Text_0, MSGBOX_NPC
# 27 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_Trainer_Declan::
# 32 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_DECLAN, Route3_DeclanIntro, Route3_DeclanOutro, Route3_NotEnoughPokemon
# 33 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trainer_Declan_Text_0, MSGBOX_NPC
# 34 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_Trainer_Fredrick::
# 39 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_FREDRICK, Route3_FredrickIntro, Route3_FredrickOutro, Route3_NotEnoughPokemon
# 40 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trainer_Fredrick_Text_0, MSGBOX_NPC
# 41 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_Trainer_Victor_Text_0:
# 12 "data/maps/Route3/scripts.pory"
	.string "I just love Pokémon!$"

Route3_EventScript_Trainer_Miguel_Text_0:
# 19 "data/maps/Route3/scripts.pory"
	.string "Bah, I'll win next time.$"

Route3_EventScript_Trainer_Ed_Text_0:
# 26 "data/maps/Route3/scripts.pory"
	.string "Fishing is life!$"

Route3_EventScript_Trainer_Declan_Text_0:
# 33 "data/maps/Route3/scripts.pory"
	.string "I'm calling daddy!$"

Route3_EventScript_Trainer_Fredrick_Text_0:
# 40 "data/maps/Route3/scripts.pory"
	.string "Rock hard!$"

Route3_NotEnoughPokemon::
# 44 "data/maps/Route3/scripts.pory"
	.string "You don't have enough Pokémon for a\n"
	.string "battle! Come back later.$"

Route3_VictorIntro::
# 48 "data/maps/Route3/scripts.pory"
	.string "I'm a huge fan of Pokémon! Let's battle.$"

Route3_VictorOutro::
# 52 "data/maps/Route3/scripts.pory"
	.string "I'm not very good at battling, though. I\n"
	.string "guess I'll stick to collecting them.$"

Route3_MiguelIntro::
# 56 "data/maps/Route3/scripts.pory"
	.string "Let us have a quick Pokémon match!$"

Route3_MiguelOutro::
# 60 "data/maps/Route3/scripts.pory"
	.string "Well, that was quick indeed. Darn it!$"

Route3_EdIntro::
# 64 "data/maps/Route3/scripts.pory"
	.string "Go, my fishies!$"

Route3_EdOutro::
# 68 "data/maps/Route3/scripts.pory"
	.string "Argh! I need more fish!$"

Route3_DeclanIntro::
# 72 "data/maps/Route3/scripts.pory"
	.string "My dad gave me these pokémon.$"

Route3_DeclanOutro::
# 76 "data/maps/Route3/scripts.pory"
	.string "My dad is going to sue you!$"

Route3_FredrickIntro::
# 80 "data/maps/Route3/scripts.pory"
	.string "Have you been to Mount Keb?$"

Route3_FredrickOutro::
# 84 "data/maps/Route3/scripts.pory"
	.string "I collect Rock Pokémon!$"
