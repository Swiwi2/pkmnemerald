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
	trainerbattle_single TRAINER_FLINT, Route1_FlintIntro, Route1_FlintOutro
# 17 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Trainer_Flint_Text_0, MSGBOX_NPC
# 18 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_NPCTeala::
# 31 "data/maps/Route1/scripts.pory"
	lock
# 32 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_NPCTeala_Text_0, MSGBOX_NPC
# 33 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_Trainer_Ashley::
# 38 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, Route1_AshleyIntro, Route1_AshleyOutro
# 39 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Trainer_Ashley_Text_0, MSGBOX_NPC
# 40 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_SignCottage_Text_0:
# 11 "data/maps/Route1/scripts.pory"
	.string "Hello!$"

Route1_EventScript_Trainer_Flint_Text_0:
# 17 "data/maps/Route1/scripts.pory"
	.string "Hmpf. I'll get you next time.$"

Route1_EventScript_NPCTeala_Text_0:
# 32 "data/maps/Route1/scripts.pory"
	.string "Hello. Be careful when venturing\n"
	.string "outside of cities. Wild Pokémon may jump\l"
	.string "out from the tall grass to battle, and\l"
	.string "other trainers will want to battle you\l"
	.string "if you make eye contact with them!\l"
	.string "You'd better stock up on PokéBalls and\l"
	.string "Potions at the Mart.$"

Route1_EventScript_Trainer_Ashley_Text_0:
# 39 "data/maps/Route1/scripts.pory"
	.string "Good luck with your adventure!$"

Route1_FlintIntro::
# 22 "data/maps/Route1/scripts.pory"
	.string "Aha, you made eye contact! That means\n"
	.string "you owe me a Pokémon Battle!$"

Route1_FlintOutro::
# 26 "data/maps/Route1/scripts.pory"
	.string "Wow, too strong!$"

Route1_AshleyIntro::
# 44 "data/maps/Route1/scripts.pory"
	.string "Hello. Would you like a quick Pokémon\n"
	.string "Battle?$"

Route1_AshleyOutro::
# 48 "data/maps/Route1/scripts.pory"
	.string "Oh, I lost? It seems I need to train my\n"
	.string "Pokémon some more.$"
