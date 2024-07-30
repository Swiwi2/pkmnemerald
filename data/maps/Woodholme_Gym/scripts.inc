Woodholme_Gym_MapScripts::
# 2 "data/maps/Woodholme_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_Gym_OnTransition
	.byte 0


Woodholme_Gym_OnTransition::
	end


Woodholme_Gym_EventScript_Man1::
# 11 "data/maps/Woodholme_Gym/scripts.pory"
	lock
# 12 "data/maps/Woodholme_Gym/scripts.pory"
	faceplayer
# 13 "data/maps/Woodholme_Gym/scripts.pory"
	msgbox Woodholme_Gym_EventScript_Man1_Text_0
# 14 "data/maps/Woodholme_Gym/scripts.pory"
	release
	return


Woodholme_Gym_EventScript_Leader::
# 19 "data/maps/Woodholme_Gym/scripts.pory"
	lock
# 20 "data/maps/Woodholme_Gym/scripts.pory"
	faceplayer
# 21 "data/maps/Woodholme_Gym/scripts.pory"
	msgbox Woodholme_Gym_EventScript_Leader_Text_0
# 22 "data/maps/Woodholme_Gym/scripts.pory"
	release
	return


Woodholme_Gym_EventScript_Man1_Text_0:
# 13 "data/maps/Woodholme_Gym/scripts.pory"
	.string "Yo. STELLA isn't here right now. Her gym\n"
	.string "is the final Gym in the Gym Challenge\l"
	.string "Series. You should complete the other\l"
	.string "Gyms first and come back when your\l"
	.string "team is more powerful. Good luck!$"

Woodholme_Gym_EventScript_Leader_Text_0:
# 21 "data/maps/Woodholme_Gym/scripts.pory"
	.string "I'm a placeholder.$"
