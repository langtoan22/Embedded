/*
		font.h file is External font library file.
    Copyright (C) 2018 Nima Mohammadi

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef FONTS_H
#define FONTS_H 120

/* C++ detection */
#ifdef __cplusplus
extern C {
#endif

/**
 *
 * Default fonts library. It is used in all LCD based libraries.
 *
 * \par Supported fonts
 *
 * Currently, these fonts are supported:
 *  - 7 x 10 pixels
 *  - 11 x 18 pixels
 *  - 16 x 26 pixels
 */
#include "stm32f10x.h"
#include "string.h"

/**
 * @defgroup LIB_Typedefs
 * @brief    Library Typedefs
 * @{
 */

/**
 * @brief  Font structure used on my LCD libraries
 */
typedef struct {
	uint16_t FontWidth;    /*!< Font width in pixels */
	uint16_t FontHeight;   /*!< Font height in pixels */
	const uint16_t *data; /*!< Pointer to data font data array */
} FontDef_t;

/**
 * @brief  String length and height
 */
typedef struct {
	uint16_t Length;      /*!< String length in units of pixels */
	uint16_t Height;      /*!< String height in units of pixels */
} FONTS_SIZE_t;

/**
 * @}
 */

/**
 * @defgroup FONTS_FontVariables
 * @brief    Library font variables
 * @{
 */

/**
 * @brief  7 x 10 pixels font size structure
 */
extern FontDef_t Font_7x10;

/**
 * @brief  11 x 18 pixels font size structure
 */
extern FontDef_t Font_11x18;

/**
 * @brief  16 x 26 pixels font size structure
 */
extern FontDef_t Font_16x26;



static unsigned char goku [] = 
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x03, 0xff, 0xfe, 0x7f, 0x3f, 0xff, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x07, 0xff, 0xff, 0x3f, 0x3f, 0xf0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe7, 0xf8, 0x0f, 0xf1, 0xff, 0x0f, 0x1f, 0x82, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x1f, 0xc0, 0x7f, 0x0f, 0x1f, 0x0f, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x7f, 0x07, 0x0f, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x1d, 0x07, 0x0f, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x1d, 0x0c, 0x0f, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x0e, 0x0c, 0x0f, 0x83, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfc, 0xc0, 0x00, 0x0e, 0x0c, 0x00, 0x0f, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x0e, 0x1c, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf0, 0x80, 0x00, 0x0e, 0x1c, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x0f, 0xf1, 0x80, 0x00, 0xec, 0x1c, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x03, 0xe1, 0x80, 0x01, 0xfc, 0x3c, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x03, 0xc1, 0x80, 0x01, 0xf8, 0x38, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x03, 0xc1, 0x00, 0x03, 0xf8, 0x38, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x03, 0x81, 0x00, 0x07, 0xe0, 0x3c, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x87, 0x80, 0x00, 0x0f, 0x80, 0x78, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf7, 0x00, 0x08, 0x1f, 0x00, 0xf1, 0x80, 0x18, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x1c, 0x3c, 0x79, 0xe1, 0x80, 0x7f, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x04, 0x1f, 0xf8, 0xfb, 0xf1, 0x80, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x66, 0xc7, 0xf3, 0xff, 0xf1, 0x81, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x73, 0xf3, 0xcf, 0xff, 0xe3, 0x80, 0x03, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x83, 0xff, 0xff, 0xff, 0xe7, 0x80, 0x08, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x03, 0xff, 0xff, 0xff, 0xe7, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x03, 0xff, 0xff, 0xff, 0xe7, 0x04, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0xff, 0xfc, 0x1f, 0xe7, 0x10, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0xc2, 0xf8, 0x3f, 0xde, 0x7c, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe6, 0xfc, 0xff, 0xfc, 0x01, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0xff, 0xff, 0xf8, 0x08, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf1, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x7f, 0xff, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfd, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x8f, 0xf3, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe3, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x87, 0xf9, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0x07, 0xfc, 0x70, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x7c, 0x0f, 0xfc, 0x39, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x0f, 0xfc, 0x0e, 0xc8, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x1f, 0xfc, 0x00, 0x76, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xc4, 0x00, 0x1f, 0xfc, 0x00, 0x42, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x80, 0xb7, 0xfc, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x3c, 0xe3, 0x23, 0xfe, 0x02, 0x01, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc8, 0x7c, 0x7e, 0x63, 0xfe, 0x04, 0x03, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc1, 0xfc, 0x7e, 0x41, 0xfc, 0x18, 0x0c, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x81, 0xec, 0x7c, 0xc1, 0xf8, 0x20, 0x10, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x83, 0xcc, 0x7c, 0x81, 0xf0, 0x40, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x83, 0x8c, 0x79, 0x80, 0xc0, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0f, 0x83, 0x08, 0x71, 0x00, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0f, 0xff, 0xc0, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x1d, 0xff, 0xf0, 0x00, 0xfc, 0x04, 0x00, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x1c, 0xff, 0xfc, 0x0f, 0xf8, 0x0c, 0x10, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x1c, 0x7f, 0xfe, 0x7f, 0xe0, 0x18, 0x70, 0x01, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x3f, 0xff, 0xff, 0xc0, 0x10, 0xe0, 0x01, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x1e, 0x1f, 0xff, 0xff, 0x00, 0x23, 0xc0, 0x01, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x06, 0x1f, 0x0f, 0xff, 0xfc, 0x01, 0xe7, 0xc0, 0x1f, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x0f, 0x80, 0x00, 0x00, 0x0f, 0xcf, 0x80, 0x7f, 0x80
};

static unsigned char beer [] = 
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xe0, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x3e, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xf9, 0x3c, 0x30, 0xff, 0xe3, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x0f, 0xf3, 0x39, 0x60, 0x0f, 0xcf, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0xf6, 0x79, 0x67, 0x81, 0x9f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xe6, 0x72, 0x4f, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xfc, 0x4e, 0x72, 0x1f, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xf8, 0x0e, 0x67, 0x1f, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xf0, 0x1e, 0x47, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xe0, 0x3e, 0x0f, 0xff, 0xff, 0x00, 0x07, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xe0, 0x3f, 0x3f, 0xff, 0xfe, 0x07, 0xc0, 0x07, 0xff, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xc0, 0x7f, 0xff, 0xff, 0xfc, 0x07, 0xff, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0x80, 0x7f, 0xff, 0xff, 0xfc, 0x07, 0xff, 0xf9, 0xf3, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xf8, 0x07, 0xff, 0xf9, 0xf3, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x01, 0xff, 0xff, 0xff, 0xf8, 0x07, 0xff, 0xf9, 0xe7, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1e, 0x01, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xfd, 0xcf, 0x9e, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1e, 0x03, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xfc, 0xcf, 0x9f, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x1e, 0x03, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xfc, 0x1f, 0x9f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x1e, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0x9f, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x0f, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x9f, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x8f, 0xff, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x9f, 0xff, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x9f, 0xff, 0xff, 0xff, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x06, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x02, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x00, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x00, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x00, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x78, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x70, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x80, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x01, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x80, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x7f, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static unsigned char walkmen_0 [] = 
{
0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x0c, 0x30, 0x00, 0x38, 0x10, 0x00, 0x20, 0x98, 0x00, 0x20, 
0x08, 0x00, 0x20, 0x10, 0x00, 0x20, 0xf0, 0x00, 0x20, 0x10, 0x00, 0x3f, 0x70, 0x00, 0x03, 0xc0, 
0x00, 0x02, 0x80, 0x00, 0x07, 0xe0, 0x00, 0x0e, 0x20, 0x00, 0x1c, 0x60, 0x00, 0x14, 0x70, 0x00, 
0x14, 0x70, 0x00, 0x16, 0x38, 0x00, 0x13, 0x2c, 0x00, 0x13, 0x24, 0x00, 0x13, 0x24, 0x00, 0x13, 
0x24, 0x00, 0x33, 0x64, 0x00, 0x03, 0x64, 0x00, 0x03, 0xe0, 0x00, 0x01, 0xc0, 0x00, 0x03, 0x40, 
0x00, 0x02, 0x40, 0x00, 0x02, 0x60, 0x00, 0x02, 0x20, 0x00, 0x02, 0x20, 0x00, 0x06, 0x20, 0x00, 
0x04, 0x20, 0x00, 0x04, 0x20, 0x00, 0x1c, 0x30, 0x00, 0x18, 0x1c, 0x00, 0x0c, 0x18, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00
};

// 'walkmen_1', 19x39px
static unsigned char walkmen_1 [] = 
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x0c, 0x30, 0x00, 0x38, 0x10, 0x00, 0x20, 
0x98, 0x00, 0x20, 0x08, 0x00, 0x20, 0x10, 0x00, 0x20, 0xf0, 0x00, 0x20, 0x10, 0x00, 0x3f, 0x70, 
0x00, 0x03, 0xc0, 0x00, 0x02, 0x80, 0x00, 0x07, 0xe0, 0x00, 0x0e, 0x20, 0x00, 0x1c, 0x60, 0x00, 
0x14, 0x70, 0x00, 0x14, 0x70, 0x00, 0x16, 0x38, 0x00, 0x13, 0x2c, 0x00, 0x13, 0x24, 0x00, 0x13, 
0x24, 0x00, 0x13, 0x24, 0x00, 0x33, 0x64, 0x00, 0x03, 0x64, 0x00, 0x03, 0xe0, 0x00, 0x01, 0xe0, 
0x00, 0x01, 0x18, 0x00, 0x07, 0x08, 0x00, 0x04, 0x0c, 0x00, 0x04, 0x04, 0x00, 0x08, 0x04, 0x00, 
0x18, 0x04, 0x00, 0x30, 0x04, 0x00, 0x20, 0x04, 0x00, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00 
};

// 'walkmen_2', 19x39px
static unsigned char walkmen_2 [] = 
{
0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x0c, 0x30, 0x00, 0x38, 0x10, 0x00, 0x20, 0x98, 0x00, 0x20, 
0x08, 0x00, 0x20, 0x10, 0x00, 0x20, 0xf0, 0x00, 0x20, 0x10, 0x00, 0x3f, 0x70, 0x00, 0x03, 0xc0, 
0x00, 0x02, 0x80, 0x00, 0x07, 0xe0, 0x00, 0x0e, 0x20, 0x00, 0x0c, 0x60, 0x00, 0x0c, 0x70, 0x00, 
0x0c, 0x70, 0x00, 0x0e, 0x38, 0x00, 0x0b, 0x2c, 0x00, 0x0b, 0x26, 0x00, 0x1b, 0x22, 0x00, 0x13, 
0x20, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x02, 0x20, 
0x00, 0x03, 0x30, 0x00, 0x01, 0x10, 0x00, 0x01, 0x98, 0x00, 0x00, 0x90, 0x00, 0x00, 0xf0, 0x00, 
0x01, 0xc0, 0x00, 0x07, 0x40, 0x00, 0x0c, 0x40, 0x00, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00 
};
// 'walkmen_3', 19x39px

static unsigned char walkmen_3 [] = 
{
0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x0c, 0x30, 0x00, 0x38, 0x10, 0x00, 0x20, 0x98, 0x00, 0x20, 
0x08, 0x00, 0x20, 0x10, 0x00, 0x20, 0xf0, 0x00, 0x20, 0x10, 0x00, 0x3f, 0x70, 0x00, 0x03, 0xc0, 
0x00, 0x02, 0x80, 0x00, 0x07, 0xe0, 0x00, 0x0e, 0x20, 0x00, 0x0c, 0x60, 0x00, 0x0c, 0x60, 0x00, 
0x0c, 0x70, 0x00, 0x0e, 0x38, 0x00, 0x03, 0x28, 0x00, 0x07, 0x20, 0x00, 0x0f, 0x20, 0x00, 0x03, 
0x20, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xc0, 
0x00, 0x02, 0x20, 0x00, 0x02, 0x30, 0x00, 0x02, 0x10, 0x00, 0x02, 0x10, 0x00, 0x02, 0x18, 0x00, 
0x02, 0x08, 0x00, 0x02, 0x10, 0x00, 0x03, 0x1c, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00
};	
// 'walkmen_4', 19x39px
	static unsigned char walkmen_4 [] = 
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x1e, 0x10, 0x00, 0x18, 0x10, 0x00, 0x0a, 
0x58, 0x00, 0x08, 0x18, 0x00, 0x09, 0x90, 0x00, 0x0c, 0x30, 0x00, 0x04, 0x20, 0x00, 0x07, 0xc0, 
0x00, 0x02, 0x80, 0x00, 0x07, 0xe0, 0x00, 0x0e, 0x30, 0x00, 0x0c, 0x70, 0x00, 0x0c, 0x70, 0x00, 
0x0c, 0x70, 0x00, 0x0e, 0x38, 0x00, 0x0b, 0x28, 0x00, 0x0f, 0x28, 0x00, 0x0f, 0x38, 0x00, 0x03, 
0x20, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xc0, 
0x00, 0x02, 0x20, 0x00, 0x02, 0x20, 0x00, 0x02, 0x20, 0x00, 0x02, 0x20, 0x00, 0x02, 0x20, 0x00, 
0x02, 0x20, 0x00, 0x02, 0x20, 0x00, 0x07, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00
};	
// 'walkmen_5', 19x39px
	static unsigned char walkmen_5 [] = 
{
0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x01, 0x86, 0x00, 0x01, 0x03, 0x80, 0x03, 0x20, 0x80, 0x02, 
0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0xe0, 0x80, 0x01, 0x00, 0x80, 0x01, 0xdf, 0x80, 0x00, 0x78, 
0x00, 0x00, 0x28, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x8e, 0x00, 0x00, 0xc7, 0x00, 0x01, 0xc5, 0x00, 
0x01, 0xc5, 0x00, 0x03, 0x8d, 0x00, 0x06, 0x99, 0x00, 0x04, 0x99, 0x00, 0x04, 0x99, 0x00, 0x04, 
0x99, 0x00, 0x04, 0xd9, 0x80, 0x04, 0xd8, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x70, 0x00, 0x00, 0x58, 
0x00, 0x00, 0x48, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x8c, 0x00, 
0x00, 0x84, 0x00, 0x00, 0x84, 0x00, 0x01, 0x87, 0x00, 0x07, 0x03, 0x00, 0x03, 0x06, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00
};

// 'walkmen_6', 19x39px
static unsigned char walkmen_6 [] = 
{
0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x01, 0x86, 0x00, 0x01, 0x03, 0x80, 0x03, 0x20, 0x80, 0x02, 
0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0xe0, 0x80, 0x01, 0x00, 0x80, 0x01, 0xdf, 0x80, 0x00, 0x78, 
0x00, 0x00, 0x28, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x8e, 0x00, 0x00, 0xc6, 0x00, 0x01, 0xc6, 0x00, 
0x01, 0xc6, 0x00, 0x03, 0x8e, 0x00, 0x06, 0x9a, 0x00, 0x0c, 0x9a, 0x00, 0x08, 0x9b, 0x00, 0x00, 
0x99, 0x00, 0x00, 0xd8, 0x00, 0x00, 0xd8, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x88, 
0x00, 0x01, 0x98, 0x00, 0x01, 0x10, 0x00, 0x03, 0x30, 0x00, 0x01, 0x20, 0x00, 0x01, 0xe0, 0x00, 
0x00, 0x70, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x46, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00
};

// 'walkmen_7', 19x39px
static unsigned char walkmen_7 [] = 
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x01, 0x86, 0x00, 0x01, 0x03, 0x80, 0x03, 
0x20, 0x80, 0x02, 0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0xe0, 0x80, 0x01, 0x00, 0x80, 0x01, 0xdf, 
0x80, 0x00, 0x78, 0x00, 0x00, 0x28, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x8e, 0x00, 0x00, 0xc7, 0x00, 
0x01, 0xc5, 0x00, 0x01, 0xc5, 0x00, 0x03, 0x8d, 0x00, 0x06, 0x99, 0x00, 0x04, 0x99, 0x00, 0x04, 
0x99, 0x00, 0x04, 0x99, 0x00, 0x04, 0xd9, 0x80, 0x04, 0xd8, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf0, 
0x00, 0x03, 0x10, 0x00, 0x02, 0x1c, 0x00, 0x06, 0x04, 0x00, 0x04, 0x04, 0x00, 0x04, 0x02, 0x00, 
0x04, 0x03, 0x00, 0x04, 0x01, 0x80, 0x04, 0x00, 0x80, 0x0c, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00
};
// 'walkmen_8', 19x39px
static unsigned char walkmen_8 [] = 
{
0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x01, 0x86, 0x00, 0x01, 0x03, 0x80, 0x03, 0x20, 0x80, 0x02, 
0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0xe0, 0x80, 0x01, 0x00, 0x80, 0x01, 0xdf, 0x80, 0x00, 0x78, 
0x00, 0x00, 0x28, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x8e, 0x00, 0x00, 0xc6, 0x00, 0x00, 0xc6, 0x00, 
0x01, 0xc6, 0x00, 0x03, 0x8e, 0x00, 0x02, 0x98, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x9e, 0x00, 0x00, 
0x98, 0x00, 0x00, 0xd8, 0x00, 0x00, 0xd8, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x78, 
0x00, 0x00, 0x88, 0x00, 0x01, 0x88, 0x00, 0x01, 0x08, 0x00, 0x01, 0x08, 0x00, 0x03, 0x08, 0x00, 
0x02, 0x08, 0x00, 0x01, 0x08, 0x00, 0x07, 0x18, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00
};
static unsigned char me [] = 
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xc0, 0x20, 0x27, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xc1, 0xa0, 0x02, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x80, 0x00, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x4b, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x5f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x40, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xdf, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x86, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0x3f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x20, 0x4f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x87, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xe0, 0x7f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xe0, 0x7f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0xff, 0xe0, 0xff, 0xfe, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0xff, 0xe0, 0xff, 0xff, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0xff, 0xe0, 0x7f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xff, 0xf0, 0x7f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00
};
static unsigned char me2 [] = 
{
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x80, 0x18, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x10, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x42, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x02, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3e, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0x81, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xc0, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x01, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x03, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x07, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x07, 0xff, 0xde, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x40, 0x03, 0xf0, 0x06, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xfb, 0xf3, 0x82, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7c, 0x07, 0xfc, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x70, 0x27, 0xf8, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7c, 0x03, 0xf8, 0x4f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0x8f, 0xfc, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xdf, 0xfd, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0x98, 0xcc, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0x40, 0x4e, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xf1, 0x7e, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0x7f, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xfc, 0xbf, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x60, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x60, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x70, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb8, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x38, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x38, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xf1, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x08, 0x00, 0x3f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

static unsigned char heart [] = 
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x44, 0x01, 0xc0, 
0x01, 0xe7, 0x01, 0x80, 0x01, 0xe7, 0x00, 0x38, 0x01, 0xe7, 0x33, 0x78, 0x06, 0xe0, 0xf7, 0xfc, 
0x0f, 0x80, 0xf7, 0xfc, 0x0f, 0x87, 0xff, 0xfc, 0x7f, 0xc7, 0x27, 0xf8, 0xff, 0xff, 0x07, 0xf8, 
0xff, 0xff, 0x03, 0xf8, 0x7f, 0xbf, 0x06, 0xf0, 0x7f, 0xbf, 0x7f, 0x20, 0x1f, 0x8f, 0x7f, 0x00, 
0x07, 0x00, 0x7f, 0x00, 0x00, 0x07, 0x3e, 0x00, 0x00, 0x07, 0x1e, 0x00, 0x00, 0x07, 0x0c, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};
#endif
