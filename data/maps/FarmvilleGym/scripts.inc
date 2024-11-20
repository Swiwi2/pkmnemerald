FarmvilleGym_MapScripts::
# 2 "data/maps/FarmvilleGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FarmvilleGym_OnTransition
	.byte 0


FarmvilleGym_OnTransition::
# 11 "data/maps/FarmvilleGym/scripts.pory"
	call FarmvilleGym_EventScript_SetupGymBattle
	return


FarmvilleGym_EventScript_SetupGymBattle::
# 16 "data/maps/FarmvilleGym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, FarmvilleGym_EventScript_SetupGymBattle_1
# 20 "data/maps/FarmvilleGym/scripts.pory"
	setvar VAR_FARMVILLE_GYM_STATE, 1
	return

FarmvilleGym_EventScript_SetupGymBattle_1:
# 17 "data/maps/FarmvilleGym/scripts.pory"
	setvar VAR_FARMVILLE_GYM_STATE, 0
	return


FarmvilleGym_EventScript_Leader::
# 25 "data/maps/FarmvilleGym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, FarmvilleGym_LeaderIntro, FarmvilleGym_LeaderOutro, FarmvilleGym_NotEnoughPokemon, FarmvilleGym_EventScript_Battle1Over
# 26 "data/maps/FarmvilleGym/scripts.pory"
	msgbox FarmvilleGym_LeaderDialogue_State1
# 27 "data/maps/FarmvilleGym/scripts.pory"
	release
	end


FarmvilleGym_EventScript_Battle1Over::
# 32 "data/maps/FarmvilleGym/scripts.pory"
	lock
# 33 "data/maps/FarmvilleGym/scripts.pory"
	msgbox FarmvilleGym_Heretakethis
# 34 "data/maps/FarmvilleGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 35 "data/maps/FarmvilleGym/scripts.pory"
	message FarmvilleGym_EventScript_Battle1Over_Text_0
# 36 "data/maps/FarmvilleGym/scripts.pory"
	waitfanfare
# 37 "data/maps/FarmvilleGym/scripts.pory"
	closemessage
# 38 "data/maps/FarmvilleGym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 39 "data/maps/FarmvilleGym/scripts.pory"
	setvar VAR_FARMVILLE_GYM_STATE, 1
# 40 "data/maps/FarmvilleGym/scripts.pory"
	release
	end


FarmvilleGym_EventScript_Battle1Over_Text_0:
# 35 "data/maps/FarmvilleGym/scripts.pory"
	.string "{PLAYER} received the SEVENTH BADGE!$"

FarmvilleGym_LeaderIntro::
# 44 "data/maps/FarmvilleGym/scripts.pory"
	.string "We battle together!$"

FarmvilleGym_NotEnoughPokemon::
# 48 "data/maps/FarmvilleGym/scripts.pory"
	.string "You need at least 2 Pokémon to engage\n"
	.string "in a double battle.$"

FarmvilleGym_LeaderOutro::
# 52 "data/maps/FarmvilleGym/scripts.pory"
	.string "YIKES!$"

FarmvilleGym_LeaderDialogue_State1::
# 56 "data/maps/FarmvilleGym/scripts.pory"
	.string "Nice one. We thought we had you...$"

FarmvilleGym_Heretakethis::
# 60 "data/maps/FarmvilleGym/scripts.pory"
	.string "Now you have seven badges..... Nice work!$"
