/*
 ============================================================================
 Name        : C_Project.c
 Author      : Mohamed Emad El-Dien Mahmoud Mohamed Hendy
 Version     : The latest version
 Copyright   : Your copyright notice
 Description : Project on regarding C language
 ============================================================================
 */

#ifndef C_PROJECT_H_
#define C_PROJECT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define WITH_ENGINE_TEMP_CONTROLLER 1
#define false 0 // using those instead of the boolean data type
#define true  1

void TurnedOn(int*);
int TrafficLight(char);
char* RoomTemperature(int*);
void EngineTemperature(int *temp,char EngineTempControllerState[]);


#endif /* C_PROJECT_H_ */
