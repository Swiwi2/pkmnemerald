EmbervilleGym_MapScripts::
# 2 "data/maps/EmbervilleGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EmbervilleGym_OnTransition
	.byte 0


EmbervilleGym_OnTransition::
# 12 "data/maps/EmbervilleGym/scripts.pory"
	call EmbervilleGym_EventScript_SetupGymBattle
	return


EmbervilleGym_EventScript_SetupGymBattle::
# 17 "data/maps/EmbervilleGym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EmbervilleGym_EventScript_SetupGymBattle_1
# 21 "data/maps/EmbervilleGym/scripts.pory"
	setvar VAR_EMBERVILLE_GYM_STATE, 1
	return

EmbervilleGym_EventScript_SetupGymBattle_1:
# 18 "data/maps/EmbervilleGym/scripts.pory"
	setvar VAR_EMBERVILLE_GYM_STATE, 0
	return


EmbervilleGym_EventScript_Leader::
# 26 "data/maps/EmbervilleGym/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, EmbervilleGym_LeaderIntro, EmbervilleGym_LeaderOutro, EmbervilleGym_EventScript_Battle1Over
# 27 "data/maps/EmbervilleGym/scripts.pory"
	msgbox EmbervilleGym_LeaderDialogue_State1
# 28 "data/maps/EmbervilleGym/scripts.pory"
	release
	end


EmbervilleGym_EventScript_Battle1Over::
# 33 "data/maps/EmbervilleGym/scripts.pory"
	lock
# 34 "data/maps/EmbervilleGym/scripts.pory"
	msgbox EmbervilleGym_Heretakethis
# 35 "data/maps/EmbervilleGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 36 "data/maps/EmbervilleGym/scripts.pory"
	message EmbervilleGym_EventScript_Battle1Over_Text_0
# 37 "data/maps/EmbervilleGym/scripts.pory"
	waitfanfare
# 38 "data/maps/EmbervilleGym/scripts.pory"
	closemessage
# 39 "data/maps/EmbervilleGym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 40 "data/maps/EmbervilleGym/scripts.pory"
	setvar VAR_EMBERVILLE_GYM_STATE, 1
# 41 "data/maps/EmbervilleGym/scripts.pory"
	release
	end


EmbervilleGym_EventScript_Battle1Over_Text_0:
# 36 "data/maps/EmbervilleGym/scripts.pory"
	.string "{PLAYER} received the THIRD BADGE!$"

EmbervilleGym_LeaderIntro::
# 45 "data/maps/EmbervilleGym/scripts.pory"
	.string "Heya, I'm a gym leader boiii$"

EmbervilleGym_LeaderOutro::
# 49 "data/maps/EmbervilleGym/scripts.pory"
	.string "Woah, you beat me!!$"

EmbervilleGym_LeaderDialogue_State1::
# 53 "data/maps/EmbervilleGym/scripts.pory"
	.string "Well done!$"

EmbervilleGym_Heretakethis::
# 57 "data/maps/EmbervilleGym/scripts.pory"
	.string "Here, take this badge! You earned it!$"
