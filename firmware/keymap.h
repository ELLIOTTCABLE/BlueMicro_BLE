/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#ifndef KEYMAP_H
#define KEYMAP_H


    #if KEYBOARD_SIDE == LEFT
        #define KEYMAP( \
            K00,   K01,   K02,   K03,   K04,       \
            K10,   K11,   K12,   K13,   K14,       \
            K20,   K21,   K22,   K23,   K24,       \
        K30,   K31,   K32,   K33,   K34     \
        ) { \
            { K00,   K01,   K02,   K03,   K04   }, \
            { K10,   K11,   K12,   K13,   K14   }, \
            { K20,   K21,   K22,   K23,   K24   }, \
            { K30,   K31,   K32,   K33,   K34   }  \
        }
    #else
        #define KEYMAP( \
            K04,   K03,   K02,   K01,   K00,       \
            K14,   K13,   K12,   K11,   K10,       \
            K24,   K23,   K22,   K21,   K20,       \
            K34,   K33,   K32,   K31,   K30     \
        ) { \
            { K00,   K01,   K02,   K03,   K04   }, \
            { K10,   K11,   K12,   K13,   K14   }, \
            { K20,   K21,   K22,   K23,   K24   }, \
            { K30,   K31,   K32,   K33,   K34   }  \
        }
    #endif


    #define _QWERTY 0
    #define _L1  1
    #define _L2  2
    #define _L3  3

    #if KEYBOARD_SIDE == LEFT

        const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

        [_QWERTY] = KEYMAP(
            KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   
            KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    
            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    
            KC_NO, KC_NO,   KC_LCTRL, LAYER_1,    KC_LSHIFT ),


        [_L1]  = KEYMAP(
            KC_1,    KC_2,     KC_3,    KC_4,    KC_5,   
            KC_ESC,  _______,  _______, _______, _______,    
            KC_CAPS, KC_GRAVE, _______, _______, _______,    
            KC_NO,   KC_NO,    KC_LCTRL, LAYER_1,    KC_LSHIFT ),


        [_L2] = KEYMAP(
            KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   
            KC_TAB,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,    
            KC_LCTL, KC_GRV,  KC_LGUI, KC_LALT, _______,    
            KC_NO, KC_NO,   KC_LCTRL, LAYER_1,    KC_LSHIFT ),


        [_L3] = KEYMAP(
            KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   
            KC_F11,  KC_F12,  _______, _______, _______,    
            _______, _______, _______, _______, _______,    
            KC_NO, KC_NO,   KC_LCTRL, LAYER_1,    KC_LSHIFT )
        };



    #else

        const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

        [_QWERTY] = KEYMAP(
            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   
            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    
            KC_N,    KC_M,    KC_C,    KC_V,    KC_ENTER,    
            KC_SPC, LAYER_2, LAYER_3, KC_NO, KC_NO ),


        [_L1]  = KEYMAP(
            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   
            _______, _______, _______, _______, _______,    
            _______, _______, _______, _______,  _______,   
            KC_SPC, LAYER_2, LAYER_3, KC_NO, KC_NO ),


        [_L2] = KEYMAP(
            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   
            _______, _______, _______, _______, _______,    
            _______, _______, _______, _______,  _______,    
            KC_SPC, LAYER_2, LAYER_3, KC_NO, KC_NO ),


        [_L3] = KEYMAP(
            KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   
            _______, _______, _______, _______,  _______,    
            _______, _______, _______, _______,  _______,    
            KC_SPC, LAYER_2, LAYER_3, KC_NO, KC_NO )
        };
    #endif   

#endif

