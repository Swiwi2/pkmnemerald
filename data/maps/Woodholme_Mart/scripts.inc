Woodholme_Mart_MapScripts::
# 2 "data/maps/Woodholme_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_Mart_OnTransition
	.byte 0


Woodholme_Mart_OnTransition::
	end


Woodholme_Mart_EventScript_MartEmployee::
# 10 "data/maps/Woodholme_Mart/scripts.pory"
	lock
# 11 "data/maps/Woodholme_Mart/scripts.pory"
	faceplayer
# 12 "data/maps/Woodholme_Mart/scripts.pory"
	message Woodholme_Mart_EventScript_MartEmployee_Text_0
# 13 "data/maps/Woodholme_Mart/scripts.pory"
	waitmessage
# 14 "data/maps/Woodholme_Mart/scripts.pory"
	compare VAR_WOODHOLME_STATE, 0
	goto_if_eq Woodholme_Mart_EventScript_MartEmployee_2
# 18 "data/maps/Woodholme_Mart/scripts.pory"
	pokemart Woodholme_MartItems2
Woodholme_Mart_EventScript_MartEmployee_1:
# 20 "data/maps/Woodholme_Mart/scripts.pory"
	msgbox Woodholme_Mart_EventScript_MartEmployee_Text_1
# 21 "data/maps/Woodholme_Mart/scripts.pory"
	release
	return

Woodholme_Mart_EventScript_MartEmployee_2:
# 15 "data/maps/Woodholme_Mart/scripts.pory"
	pokemart Woodholme_MartItems1
	goto Woodholme_Mart_EventScript_MartEmployee_1


	.align 2
# 24 "data/maps/Woodholme_Mart/scripts.pory"
Woodholme_MartItems1:
# 25 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_POTION
# 26 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_NONE

	.align 2
# 29 "data/maps/Woodholme_Mart/scripts.pory"
Woodholme_MartItems2:
# 30 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 31 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_POTION
# 32 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 33 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 34 "data/maps/Woodholme_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

Woodholme_Mart_EventScript_MartEmployee_Text_0:
# 12 "data/maps/Woodholme_Mart/scripts.pory"
	.string "How may I help you?$"

Woodholme_Mart_EventScript_MartEmployee_Text_1:
# 20 "data/maps/Woodholme_Mart/scripts.pory"
	.string "A pleasure doing business with you.$"
