/* Copyright 2022 Jose Pablo Ramirez <jp.ramangulo@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once


#ifdef RGBLIGHT_ENABLE


//#define     RGBLED_NUM 1
//#define     RGB_DI_PIN GP17
//#define     RGB_MATRIX_LED_COUNT 1

#define     RGBLED_NUM 32
#define     RGB_DI_PIN GP0
#define     RGB_MATRIX_LED_COUNT 32

#undef RGBLIGHT_SAT_STEP
#define RGBLIGHT_SAT_STEP 16
#undef RGBLIGHT_VAL_STEP
#define RGBLIGHT_VAL_STEP 32

//animations
#define     RGBLIGHT_EFFECT_BREATHING
#define     RGBLIGHT_EFFECT_CHRISTMAS
#define     RGBLIGHT_EFFECT_RAINBOW_MOOD
#define     RGBLIGHT_EFFECT_RGB_TEST
#define     RGBLIGHT_EFFECT_TWINKLE

#endif

