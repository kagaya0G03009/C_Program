/*
 * Merge.c
 *
 *  Created on: Feb 6, 2018
 *      Author: kagaya
 */


#include <stdio.h>
#include <time.h>
int b[10];

#define N 10000
static long a[N];
void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high) {
   int mid;

   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else {
      return;
   }
}

void Test_Merge_Sort() {
   int i;



   	   	time_t s;
   		clock_t t1,t2;
   		time(&s);
   		srand(s);
   		for(i = 0; i<N ; i++)
   		{
   			a[i] = rand() % N;
   		}



   		printf("List before sorting\n");

   		   for(i = 0; i <= N; i++)
   		      printf("%d ", a[i]);

   		   	   	t1 = clock();
   		   		sort(0, N);
   		   		t2 = clock();

   		   printf("\nList after sorting\n");

   		   for(i = 0; i <= N; i++)
   		      printf("%d ", a[i]);

   		   	   	printf("sorting in 10000 Array time is \n");
   		   		printf("Finish Sorting time is = ");
   		   		printf("%.2fsec \n",(double)(t2-t1));
   		   		printf("\n");

}
