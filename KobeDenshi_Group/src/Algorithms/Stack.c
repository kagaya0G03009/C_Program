#include "Stack.h"

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10000


    struct stack

    {

        int stk[MAXSIZE];

        int top;

    };

    typedef struct stack STACK;

    STACK s;


void Stackpage()
{
	int choice;

	        int option = 1;

	        s.top = -1;



	        printf ("STACK OPERATION\n");

	        while (option)

	        {

	            printf ("------------------------------------------\n");

	            printf ("      1    -->    PUSH               \n");

	            printf ("      2    -->    POP               \n");

	            printf ("      3    -->    DISPLAY               \n");

	            printf ("      4    -->    EXIT           \n");

	            printf ("------------------------------------------\n");



	            printf ("Enter your choice");

	            scanf    ("%d", &choice);

	            switch (choice)

	            {

	            case 1:

	                push();

	                break;

	            case 2:

	                pop();

	                break;

	            case 3:

	                displayStack();

	                break;

	            case 4:
	            	 printf("Exit");
	                return;

	            }



	            printf ("続行しますか（タイプ0（NO）または1（YES））？\n");

	            scanf    ("%d", &option);

	        }

	    }

void push ()

    {

        int num;

        if (s.top == (MAXSIZE - 1))

        {

            printf ("スタックはいっぱいです");

            return;

        }

        else

        {

            printf ("プッシュされる要素を入力します\n");

            scanf ("%d", &num);

            s.top = s.top + 1;

            s.stk[s.top] = num;

        }

        return;

    }

    /*  Function to delete an element from the stack */

    int pop ()

    {

        int num;

        if (s.top == - 1)

        {

            printf ("Stack is Empty\n");

            return (s.top);

        }

        else

        {

            num = s.stk[s.top];

            printf ("poped element is = %d", s.stk[s.top]);

            s.top = s.top - 1;

        }

        return(num);

    }

    /*  Function to display the status of the stack */

    void displayStack ()

    {

        int i;

        if (s.top == -1)

        {

            printf ("Stack is empty\n");

            return;

        }

        else

        {

            printf ("\n スタックの状態は次のとおりです。 \n");

            for (i = s.top; i >= 0; i--)

            {

                printf ("%d\n", s.stk[i]);

            }

        }

        printf ("\n");

    }

