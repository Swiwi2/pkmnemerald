Route1_MapScripts::
# 2 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_EventScript_Transition
	.byte 0


Route1_EventScript_Transition::
	return


Route1_EventScript_SignCottage::
# 10 "data/maps/Route1/scripts.pory"
	lock
# 11 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_SignCottage_Text_0
# 12 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_Trainer_Flint::
# 16 "data/maps/Route1/scripts.pory"
	trainerbattle_double TRAINER_FLINT, Route1_FlintIntro, Route1_FlintOutro, Route1_NotEnoughMons
# 17 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Trainer_Flint_Text_0, MSGBOX_NPC
# 18 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_Trainer_Ashley::
# 22 "data/maps/Route1/scripts.pory"
	trainerbattle_double TRAINER_ASHLEY, Route1_AshleyIntro, Route1_AshleyOutro, Route1_NotEnoughMons
# 23 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Trainer_Ashley_Text_0, MSGBOX_NPC
# 24 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_Trainer_Alberto::
# 28 "data/maps/Route1/scripts.pory"
	trainerbattle_double TRAINER_ALBERTO, Route1_AlbertoIntro, Route1_AlbertoOutro, Route1_NotEnoughMons
# 29 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Trainer_Alberto_Text_0, MSGBOX_NPC
# 30 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_NPCTeala::
# 34 "data/maps/Route1/scripts.pory"
	lock
# 35 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_NPCTeala_Text_0, MSGBOX_NPC
# 36 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_Hikers::
# 40 "data/maps/Route1/scripts.pory"
	lock
# 41 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Hikers_Text_0, MSGBOX_NPC
# 42 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_SignCottage_Text_0:
# 11 "data/maps/Route1/scripts.pory"
	.string "TRAINERS WELCOME$"

Route1_EventScript_Trainer_Flint_Text_0:
# 17 "data/maps/Route1/scripts.pory"
	.string "Hmpf. I'll get you next time.$"

Route1_EventScript_Trainer_Ashley_Text_0:
# 23 "data/maps/Route1/scripts.pory"
	.string "Good luck with your adventure!$"

Route1_EventScript_Trainer_Alberto_Text_0:
# 29 "data/maps/Route1/scripts.pory"
	.string "My hard-earned money....$"

Route1_EventScript_NPCTeala_Text_0:
# 35 "data/maps/Route1/scripts.pory"
	.string "Hello. Be careful when venturing\n"
	.string "outside of cities. Wild Pokémon may jump\l"
	.string "out from the tall grass to battle, and\l"
	.string "other trainers will want to battle you\l"
	.string "if you make eye contact with them!\l"
	.string "You'd better stock up on PokéBalls and\l"
	.string "Potions at the Mart.$"

Route1_EventScript_Hikers_Text_0:
# 41 "data/maps/Route1/scripts.pory"
	.string "Sorry kid, a mysterious Pokémon was\n"
	.string "sighted down past Route 21. Could be\l"
	.string "dangerous so road's closed until\l"
	.string "further notice.$"

Route1_FlintIntro::
# 45 "data/maps/Route1/scripts.pory"
	.string "Aha, you made eye contact! That means\n"
	.string "you owe me a Pokémon Battle!$"

Route1_FlintOutro::
# 49 "data/maps/Route1/scripts.pory"
	.string "Wow, too strong!$"

Route1_AshleyIntro::
# 53 "data/maps/Route1/scripts.pory"
	.string "Hello. Would you like a quick Pokémon\n"
	.string "Battle?$"

Route1_AshleyOutro::
# 57 "data/maps/Route1/scripts.pory"
	.string "Oh, I lost? It seems I need to train my\n"
	.string "Pokémon some more.$"

Route1_AlbertoIntro::
# 61 "data/maps/Route1/scripts.pory"
	.string "A newbie trainer? Let's battle!$"

Route1_AlbertoOutro::
# 65 "data/maps/Route1/scripts.pory"
	.string "Yikes. I thought you were new to this?$"

Route1_NotEnoughMons::
# 69 "data/maps/Route1/scripts.pory"
	.string "You don't have enough Pokémon for a\n"
	.string "battle...$"
