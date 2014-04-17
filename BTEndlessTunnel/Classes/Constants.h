//
//  Constants.h
//  BTEndlessTunnel
//
//  Created by NSS on 3/21/14.
//
//

#ifndef BTEndlessTunnel_Constants_h
#define BTEndlessTunnel_Constants_h

#include "cocos2d.h"

#define SP_SHADOW "shadow.png"
#define SHOW_FPS false
#define WIN_SIZE CCDirector::sharedDirector()->getWinSize()

// Definición de ID's para Local Storage

#define USER_CONTROL_IS_JOYPAD "KEY_CONTROL_IS_JOYPAD"
#define USER_SAVE_REPLAY "KEY_REPLAY_NUMBER_%d"
#define USER_PLAYER_SELECTED "KEY_PLAYER_SELECTED"
#define USER_MAX_SCORE "KEY_MAX_SCORE"
#define USER_TOTAL_GAMES_PLAYED "KEY_TOTAL_GAMES_PLAYED"
#define USER_TOTAL_SCORE "KEY_TOTAL_SCORE"
#define USER_SCORE_IN_LEVEL "KEY_SCORE_LEVEL_%d"

// Notifications
#define NOTIFICATION_PAUSE_GAME "NOT_PAUSE_GAME"
#define NOTIFICATION_RESUME_GAME "NOT_RESUME_GAME"
#define NOTIFICATION_PLAY_AGAIN "NOT_PLAY_AGAIN"
#define NOTIFICATION_GO_HOME "NOT_GO_HOME"

// Musics and SFX
#define BG_MUSIC_01 "bg_music.mp3"
#define BG_MUSIC_02 "bg_game_01.mp3"
#define BG_MUSIC_03 "POL-turtle-blues-short.mp3"

#define SFX_JUMP "jump.mp3"
#define SFX_SMASH "smash.mp3"
#define SFX_SWOOSH "swoosh.mp3"
#define SFX_BUTTON "button.mp3"

// Game constants
#define MAX_PARALLAX 5
#define MAX_OBSTACLES 10

#define START_X_OBSTACLES WIN_SIZE.width * 1.9f
#define START_WORLD_SPEED WIN_SIZE.width * 0.5f
#define MIN_DISTANCE_OBSTACLES WIN_SIZE.width / 1.8f

#define DRAW_COLLISIONS false

// Admob
#define MY_BANNER_UNIT_ID "ca-app-pub-3855348217239115/3776780188"

// Music and Sound
#define BG_MUSIC_VOLUME 0.2f

#endif
