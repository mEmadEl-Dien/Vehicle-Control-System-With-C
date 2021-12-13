/*
 ============================================================================
 Name        : C_Project.c
 Author      : Mohamed Emad El-Dien Mahmoud Mohamed Hendy
 Version     : The latest version
 Copyright   : Your copyright notice
 Description : Project on regarding C language
 ============================================================================
 */

/***************** You will find many switch cases as the code itself is filled with cases =) ******************/

#include "C_Project.h"

int main(void) {
	setbuf(stdout,NULL);

	char operation;
	int Continue;// To check when I will exit the whole program

	// For the states I made an array of strings
	char state[][35]={"Turn on the vehicle engine","Turn off the vehicle engine","Quit the system"};

	do
	{
		printf("a.%s\nb.%s\nc.%s\n\n",state[0],state[1],state[2]);
		scanf(" %c",&operation);

		switch(operation)
		{
		case 'a':   //In case I needed to turn on the engine
			printf("Your current state : %s\n",state[0]);
			TurnedOn(&Continue);
		case 'b':
			Continue=true;
			printf("Your current state : %s\n\n",state[1]);
			break;
		case 'c':   //In case I wanna exit the program
			Continue=false;
			printf("Your current state : %s\n\n",state[2]);
			break;
		default:   //In case the user input was invalid =)
			printf("Enter a valid input and don't miss with my program\n");
			break;
		}
	}
	while(Continue);
	return 0;
}
