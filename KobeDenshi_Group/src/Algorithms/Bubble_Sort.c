/*
 * Bubble_Sort.c
 *
 *  Created on: Jan 30, 2018
 *      Author: kagaya
 */
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#define MAX 10
#define N 10000
static long x, a[N];

void display_Bubble_Sort() {
   int i;
   printf("[");

   // navigate through all items
   for(i = 0; i < N; i++) {
      printf("%d ",a[i]);
   }

   printf("]\n");
}


void bubbleSort() {
   int temp;
   int i,j;


  		time_t s;
  		clock_t t1,t2;
  		time(&s);
  		srand(s);
  		for(x = 0; x<N ; x++)
  		{
  			a[x] = rand() % N;
  		}
  		t1 = clock();


   bool swapped = false;

   // loop through all numbers
   for(i = 0; i < N-1; i++) {
      swapped = false;

      // loop through numbers falling ahead
      for(j = 0; j < N-1-i; j++) {
         printf("     Items compared: [ %d, %d ] ", a[j],a[j+1]);

         // check if next number is lesser than current no
         //   swap the numbers.
         //  (Bubble up the highest number)

         if(a[j] > a[j+1]) {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;

            swapped = true;
            printf(" => swapped [%d, %d]\n",a[j],a[j+1]);
         }else {
            printf(" => not swapped\n");
         }

      }

      // if no number was swapped that means
      //   array is sorted now, break the loop.
      if(!swapped) {
         break;
      }

      printf("Iteration %d#: ",(i+1));
      display_Bubble_Sort();
      t2 = clock();
      		printf("sorting in 10000 Array time is \n");
      		printf("%.2fsec \n",(double)(t2-t1));
      		printf("\n");
   }

}

/*
 *
 *

 *
 *
 *
 *
 * */


void BubleSort(){


}


