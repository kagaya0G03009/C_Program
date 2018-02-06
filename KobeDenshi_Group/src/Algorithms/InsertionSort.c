/*
 * InsertionSort.c
 *
 *  Created on: Feb 5, 2018
 *      Author: kagaya
 */


#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#define N 10000
static long a[N];

void printline_Count(int count) {
   int i;

   for(i = 0;i <count-1;i++) {
      printf("=");
   }

   printf("=\n");
}

void display_Insertion_Sort() {
   int i;
   printf("[");

   // navigate through all items
   for(i = 0;i<N;i++) {
      printf("%d ",a[i]);
   }

   printf("]\n");
}

void insertionSort() {

   int valueToInsert;
   int holePosition;
   int i;

   // loop through all numbers
   for(i = 1; i < N; i++) {

      // select a value to be inserted.
      valueToInsert = a[i];

      // select the hole position where number is to be inserted
      holePosition = i;

      // check if previous no. is larger than value to be inserted
      while (holePosition > 0 && a[holePosition-1] > valueToInsert) {
         a[holePosition] = a[holePosition-1];
         holePosition--;
         //printf(" item moved : %d\n" , a[holePosition]);
      }

      if(holePosition != i) {
         //printf(" item inserted : %d, at position : %d\n" , valueToInsert,holePosition);
         // insert the number at hole position
         a[holePosition] = valueToInsert;
      }

      //printf("Iteration %d#:",i);
      //display_Insertion_Sort();

   }
}

void Test_InsertionSort() {

   time_t s;
   clock_t t1,t2;
   time(&s);
   srand(s);
   for(int i = 0; i<N ; i++)
   	{
   		a[i] = rand() % N;
   	}
   	printf("Input Array: \n");
    display_Insertion_Sort();
    printline_Count(50);
   	t1 = clock();
   	insertionSort();
   	t2 = clock();
   	printf(" Finish Insertion_Sort Output Array: \n");
   	display_Insertion_Sort();
   	printline_Count(50);
   	printf("sorting in %d Array time is \n",N);
   	printf("Finish Sorting time is = ");
   	printf("%.2fsec \n",(double)(t2-t1));
   	printf("\n");

}
