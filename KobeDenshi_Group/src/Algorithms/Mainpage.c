/*
 * Mainpage.c
 *
 *  Created on: Jan 30, 2018
 *      Author: kagaya
 */
#include <time.h>
#include "SelectSort.h"
#include "Stack.h"
#include "Queue.h"
#include <ctype.h>
#include <string.h>
void MainPage()
{
	int option ;

		while(1)
		{

			switch(option)
			{
			case 1:
				printf("You Selected number 1 Stack ");
				Stackpage();
				break;
			case 2:
				printf("You Selected number 2  Queue ");
			    QueueMain();
				break;
			case 3:
				printf("You selected number 3 Selected sort");
				 printf("Input Array: ");
				 display_Bubble_Sort();
				 printf("\n");

				 bubbleSort();
				 printf("\nOutput Array: ");
				 display_Bubble_Sort();
				break;
			case 4:
				//
				break;
			case 5:
				//
				break;
			case 6:
				//
				break;
			case 7:
				//
				break;
			case 8:
				//
				break;
			case 9:
				//
				break;
			case 10:
				//
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");


				break;

			case 11:

				exit(1);

			}
			printf("Please Enter a number 1 - 10  11 to Exit \n");
			printf("Enter 1  a for Stack \n");
			printf("Enter 2 a for Queue \n ");
			printf("Enter 3 a for Bubble_Sort");
			// add more the display to the the work here;

			// need to refactor this to check the letter ;
			scanf("%d",&option);
			if(option <= 10)
			{
				printf("Please Enter a valid number ");
			}





		}

}
