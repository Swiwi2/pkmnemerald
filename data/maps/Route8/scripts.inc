Route8_MapScripts::
# 2 "data/maps/Route8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route8_OnTransition
	.byte 0


Route8_OnTransition::
# 6 "data/maps/Route8/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Route8_OnTransition_1
# 11 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_STATE, 0
	return

Route8_OnTransition_1:
# 7 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_STATE, 1
# 8 "data/maps/Route8/scripts.pory"
	setflag FLAG_ROUTE8_UNBLOCKED
	return


Route8_EventScript_Hiker::
# 16 "data/maps/Route8/scripts.pory"
	lock
	return


Route8_EventScript_BlockedRoad::
# 20 "data/maps/Route8/scripts.pory"
	lock
# 21 "data/maps/Route8/scripts.pory"
	applymovement 1, Route8_ManWalkDown
# 22 "data/maps/Route8/scripts.pory"
	waitmovement 1
# 23 "data/maps/Route8/scripts.pory"
	msgbox Route8_EventScript_BlockedRoad_Text_0, MSGBOX_NPC
# 24 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route8_PlayerMove
# 25 "data/maps/Route8/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 26 "data/maps/Route8/scripts.pory"
	applymovement 1, Route8_ManWalkBack
# 27 "data/maps/Route8/scripts.pory"
	waitmovement 1
# 28 "data/maps/Route8/scripts.pory"
	releaseall
	return


# 31 "data/maps/Route8/scripts.pory"
Route8_ManWalkDown:
# 32 "data/maps/Route8/scripts.pory"
	walk_down
# 32 "data/maps/Route8/scripts.pory"
	walk_down
	step_end

# 35 "data/maps/Route8/scripts.pory"
Route8_ManWalkBack:
# 36 "data/maps/Route8/scripts.pory"
	face_up
# 37 "data/maps/Route8/scripts.pory"
	walk_up
# 37 "data/maps/Route8/scripts.pory"
	walk_up
# 38 "data/maps/Route8/scripts.pory"
	face_down
	step_end

# 41 "data/maps/Route8/scripts.pory"
Route8_PlayerMove:
# 42 "data/maps/Route8/scripts.pory"
	face_down
# 43 "data/maps/Route8/scripts.pory"
	walk_down
	step_end

Route8_EventScript_BlockedRoad_Text_0:
# 23 "data/maps/Route8/scripts.pory"
	.string "Sorry kid, only strong trainers are\n"
	.string "allowed to pass through the tunnel to\l"
	.string "Pakkasjarven City. If you haven't\l"
	.string "defeated Amberville Gym, you should do\l"
	.string "so. After that, head to Emberville, to\l"
	.string "the East.$"
