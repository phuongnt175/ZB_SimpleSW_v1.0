/*
 * button.h
 *
 *  Created on: Feb 22, 2023
 *      Author: admin1
 */

#ifndef SOURCE_MID_BUTTON_BUTTON_H_
#define SOURCE_MID_BUTTON_BUTTON_H_


typedef enum
{
	release,
	press_1,
	press_2,
	press_3,
	hold_1s,
	hold_2s
}btnState_e;

typedef void (*buttonCallbackFunction)(uint8_t, btnState_e);

void buttonInit(buttonCallbackFunction);


#endif /* SOURCE_MID_BUTTON_BUTTON_H_ */
