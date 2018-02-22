/*
 * Shell.c
 *
 *  Created on: Feb 2, 2018
 *      Author: kagaya
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#define N 10000
static long a[N];



void printlines(int count) {
   int i;

   for(i = 0;i <count-1;i++) {
      printf("=");
   }

   printf("=\n");
}

void displayAll_Shell() {
   int i;
   printf("[");

   // navigate through all items
   for(i = 0;i<N;i++) {
      printf("%d ",a[i]);
   }

   printf("]\n");
}

void shellSort() {
   int inner, outer;
   int valueToInsert;
   int interval = 1;
   int elements = N;
   int i = 0;

   while(interval <= elements/3) {
      interval = interval*3 +1;
   }

   while(interval > 0) {
      //printf("iteration %d#:",i);
      //displayAll_Shell();

      for(outer = interval; outer < elements; outer++) {
         valueToInsert = a[outer];
         inner = outer;

         while(inner > interval -1 && a[inner - interval]
            >= valueToInsert) {
            a[inner] = a[inner - interval];
            inner -=interval;
           // printf(" item moved :%d\n",a[inner]);
         }

         a[inner] = valueToInsert;
         //printf(" item inserted :%d, at position :%d\n",valueToInsert,inner);
      }

      interval = (interval -1) /3;
      i++;
   }
}

void  TestSpeedShell() {

   		time_t s;
   		clock_t t1,t2;
   		time(&s);
   		srand(s);
   		for( int i = 0; i<N ; i++)
   		{
   			a[i] = rand() % N;
   		}
   		printf("Random Array \n");
   		displayAll_Shell();
   		t1 = clock();
   		shellSort();
   		t2 = clock();
   		printf(" Finish Shell Shorting Output Array: \n");
   		displayAll_Shell();
   		printlines(50);
   		printf("sorting in %d Array time is \n",N);
   		printf("Finish Sorting time is = ");
   		printf("%.2fsec \n",(double)(t2-t1));
   		printf("\n");

}



