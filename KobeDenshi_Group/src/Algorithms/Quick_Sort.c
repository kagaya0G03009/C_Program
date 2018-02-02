/*
 * Quick_Sort.c
 *
 *  Created on: Feb 1, 2018
 *      Author: kagaya
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#define N 10
static long  a[N];


void printline(int count) {
   int i;

   for(i = 0;i <count-1;i++) {
      printf("=");
   }

   printf("=\n");
}

void display() {
   int i;
   printf("[");

   // navigate through all items
   for(i = 0;i<N;i++) {
      printf("%d ",a[i]);
   }

   printf("]\n");
}

void swap(int num1, int num2) {
   int temp = a[num1];
   a[num1] = a[num2];
   a[num2] = temp;
}

int partition(int left, int right, int pivot) {
   int leftPointer = right -1;
   int rightPointer = right;

   while(true) {
      while(a[++leftPointer] < pivot) {
         //do nothing
      }

      while(rightPointer > 0 && a[--rightPointer] > pivot) {
         //do nothing
      }

      if(leftPointer >= rightPointer) {
         break;
      } else {
         printf(" item swapped :%d,%d\n", a[leftPointer],a[rightPointer]);
         swap(leftPointer,rightPointer);
      }
   }

   printf(" pivot swapped :%d,%d\n", a[leftPointer],a[right]);
   swap(leftPointer,right);
   printf("Updated Array: ");
   display();
   return leftPointer;
}

void quickSort(int left, int right) {
   if(right-left <= 0) {
      return;
   } else {
      int pivot = a[right];
      int partitionPoint = partition(left, right, pivot);
      quickSort(left,partitionPoint-1);
      quickSort(partitionPoint+1,right);
   }
}

void testSpeed() {
	int i;
	time_t s;
	clock_t t1,t2;
	time(&s);
	srand(s);
	for(i = 0; i<N ; i++)
	{
	a[i] = rand() % N;
	}
	t1 = clock();
	 printf("Input Array: ");
	 display();
	 printline(50);
	 quickSort(0,N-1);
	 printf("Output Array: ");
	 display();
	 printline(50);
	t2 = clock();
	printf("sorting in %d Array time is \n",N);
	printf("%.2fsec \n",(double)(t2-t1));
	printf("\n");

}

void DisplayQuickSort()
{
	 int i;
	   printf("[");

	   // navigate through all items
	   for(i = 0; i < N; i++) {
	      printf("%d ",a[i]);
	   }

	   printf("]\n");
}
