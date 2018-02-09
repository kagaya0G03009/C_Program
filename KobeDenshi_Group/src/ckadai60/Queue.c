/*
 * Queue.c
 *
 *  Created on: Jan 30, 2018
 *      Author: kagaya
 */
#include "../ckadai60/Queue.h"

#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;

void QueueMain()
{
	int choice;

	        while (1)

	        {
	        	printf("キュー\n ");
	        	printf ("------------------------------------------\n");
	            printf("1.要素をキューに挿入する \n");

	            printf("2.キューから要素を削除する \n");

	            printf("3.キューのすべての要素を表示する\n");

	            printf("4.終了する \n");

	            printf("あなたの選択を入力してください :\n ");
	            printf ("------------------------------------------\n");
	            scanf("%d", &choice);

	            switch (choice)

	            {

	                case 1:

	                insert();

	                break;

	                case 2:

	                delete();

	                break;

	                case 3:

	                displayQueue();

	                break;

	                case 4:

	                return;

	                default:

	                printf("誤った選択 \n");

	            } /*End of switch*/

	        } /*End of while*/

}



void insert()

   {

       int add_item;

       if (rear == MAX - 1)

       printf("キューのオーバーフロー \n");

       else

       {

           if (front == - 1)

           /*If queue is initially empty */

           front = 0;

           printf("キュー内の要素を挿入する : ");

           scanf("%d", &add_item);

           rear = rear + 1;

           queue_array[rear] = add_item;

       }

   } /*End of insert()*/



  void  delete()

   {

       if (front == - 1 || front > rear)

       {

           printf("キューのアンダーフロー \n");



       }

       else

       {

           printf("キューから削除された要素は次のとおりです。 %d\n", queue_array[front]);

           front = front + 1;

       }

   } /*End of delete() */

   void displayQueue()

   {

       int i;

       if (front == - 1){
       	printf("\n");
           printf("キューは空です \n");
       }
       else

       {

           printf("キューは : \n");

           for (i = front; i <= rear; i++)

               printf("%d ", queue_array[i]);

           printf("\n");

       }

   } /*End of display() */
