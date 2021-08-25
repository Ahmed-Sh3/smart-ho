/*
 * KEY_Interface.h
 *
 *  Created on: Aug 23, 2020
 *      Author: Ahmed shaban
 */

#ifndef 	KEY_INTERFACE_H_
#define 	KEY_INTERFACE_H_



#include "LIB/ERROR_STATE.h"



/***************************************************/
/*************** Keypad Initialization *************/
/***************************************************/
ErrorState KEYPAD_VidInit (void) ;





/********************************************************/
/*************** Keypad Get the pressed key *************/
/********************************************************/
ErrorState KEYPAD_U8GetKey (u8 * Copy_PU8PressedKey) ;




#endif 
