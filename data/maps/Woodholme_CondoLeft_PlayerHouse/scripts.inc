Woodholme_CondoLeft_PlayerHouse_MapScripts::
# 2 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_CondoLeft_PlayerHouse_OnTransition
	.byte 0


Woodholme_CondoLeft_PlayerHouse_OnTransition::
	end


Woodholme_CondoLeft_PlayerHouse_EventScript_Mom::
# 13 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	lock
# 14 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	faceplayer
# 16 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	compare VAR_WOODHOLME_STATE, 0
	goto_if_eq Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_2
# 21 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	message Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_Text_1
# 22 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	multichoice 25, 5, MULTI_CHOICE_MOM, 0
# 23 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	closemessage
# 24 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_5
# 27 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_6
# 30 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_7
Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_1:
# 34 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	release
	return

Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_2:
# 17 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	msgbox Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_Text_0
	goto Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_1

Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_5:
# 25 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	msgbox MomDialogueOption1
	goto Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_1

Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_6:
# 28 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	msgbox MomDialogueOption2
	goto Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_1

Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_7:
# 31 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	msgbox MomDialogueOption3
	goto Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_1


Woodholme_CondoLeft_PlayerHouse_Trigger_Intro::
# 39 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	lock
# 40 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	applymovement 1, Woodholme_CondoLeft_PlayerHouse_Movement_MomIntro
# 41 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	waitmovement 0
# 42 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	msgbox Woodholme_CondoLeft_PlayerHouse_MomIntro
# 43 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	setvar VAR_GAMEINTRO_STATE, 1
# 44 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	setrespawn HEAL_LOCATION_WOODHOLME_CITY
# 45 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 46 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	release
	return


# 49 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
Woodholme_CondoLeft_PlayerHouse_Movement_MomIntro:
# 50 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	face_up
# 51 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	walk_up
# 52 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	face_left
# 53 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	walk_left
	step_end

Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_Text_0:
# 17 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "You should go and visit RED in his lab!$"

Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_Text_1:
# 21 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "What would you like to talk about?$"

Woodholme_CondoLeft_PlayerHouse_MomIntro::
# 56 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "MOM: Hello honey! We've finally arrived\n"
	.string "in Woodholme City. Can you believe it?\l"
	.string "Your very own Pokémon journey is about\l"
	.string "to begin! Now that you're old enough,\l"
	.string "you too can become a Pokémon trainer!\l"
	.string "That's part of the reason why we moved\l"
	.string "to Woodholme City, after all. Your first\l"
	.string "order of business should be to visit\l"
	.string "RED in his lab next door. He will explain\l"
	.string "the basics of Pokémon training and get\l"
	.string "you sorted with your very own Pokémon!\l"
	.string "Go on, I believe in you!$"

MomDialogueOption1::
# 61 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "Yes, it's a wonderful city isn't it? I'm\n"
	.string "excited to start my new job soon. Good\l"
	.string "luck on your Pokémon adventure, and\l"
	.string "remember: if you ever need to rest for a\l"
	.string "bit you're always welcome back home.$"

MomDialogueOption2::
# 66 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "The Pokémon Gym Challenge? Yes, in\n"
	.string "order to prove that a trainer has the\l"
	.string "skills needed to challenge the\l"
	.string "CHAMPION, they must first beat all the\l"
	.string "Gym Leaders. I believe you have what it\l"
	.string "takes to do just that. Good luck!$"

MomDialogueOption3::
# 71 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "Hmm. May? Oh that lovely young girl from\n"
	.string "next door? Yes, isn't she sweet? Oh, you\l"
	.string "two are rivals? That's great. I'm sure\l"
	.string "you'll be good motivators for each\l"
	.string "other during your respective Pokémon\l"
	.string "journeys!$"
