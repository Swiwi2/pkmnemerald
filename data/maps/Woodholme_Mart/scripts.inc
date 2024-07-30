Woodholme_Mart_MapScripts::
# 2 "data/maps/Woodholme_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_Mart_OnTransition
	.byte 0


Woodholme_Mart_OnTransition::
	end


Woodholme_Mart_EventScript_MartEmployee::
# 11 "data/maps/Woodholme_Mart/scripts.pory"
	lock
# 12 "data/maps/Woodholme_Mart/scripts.pory"
	faceplayer
# 13 "data/maps/Woodholme_Mart/scripts.pory"
	message Woodholme_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/Woodholme_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/Woodholme_Mart/scripts.pory"
	compare VAR_WOODHOLME_STATE, 0
	goto_if_eq Woodholme_Mart_EventScript_MartEmployee_2
# 19 "data/maps/Woodholme_Mart/scripts.pory"
	pokemart Woodholme_MartItems2
Woodholme_Mart_EventScript_MartEmployee_1:
# 21 "data/maps/Woodholme_Mart/scripts.pory"
	msgbox Woodholme_Mart_EventScript_MartEmployee_Text_1
# 22 "data/maps/Woodholme_Mart/scripts.pory"
	release
	return

Woodholme_Mart_EventScript_MartEmployee_2:
# 16 "data/maps/Woodholme_Mart/scripts.pory"
	pokemart Woodholme_MartItems1
	goto Woodholme_Mart_EventScript_MartEmployee_1


	.align 2
# 26 "data/maps/Woodholme_Mart/scripts.pory"
Woodholme_MartItems1:
# 27 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_POTION
# 28 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_NONE

	.align 2
# 32 "data/maps/Woodholme_Mart/scripts.pory"
Woodholme_MartItems2:
# 33 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 34 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_POTION
# 35 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 36 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 37 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

Woodholme_Mart_EventScript_Man::
# 42 "data/maps/Woodholme_Mart/scripts.pory"
	lock
# 43 "data/maps/Woodholme_Mart/scripts.pory"
	faceplayer
# 44 "data/maps/Woodholme_Mart/scripts.pory"
	msgbox Woodholme_Mart_EventScript_Man_Text_0
# 45 "data/maps/Woodholme_Mart/scripts.pory"
	release
	return


Woodholme_Mart_EventScript_MartEmployee_Text_0:
# 13 "data/maps/Woodholme_Mart/scripts.pory"
	.string "How may I help you?$"

Woodholme_Mart_EventScript_MartEmployee_Text_1:
# 21 "data/maps/Woodholme_Mart/scripts.pory"
	.string "A pleasure doing business with you.$"

Woodholme_Mart_EventScript_Man_Text_0:
# 44 "data/maps/Woodholme_Mart/scripts.pory"
	.string "The PokéMart really has a lot of useful\n"
	.string "items!$"
