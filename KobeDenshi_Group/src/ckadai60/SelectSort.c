/*
 * SelectSort.c
 *
 *  Created on: Jan 30, 2018
 *      Author: kagaya
 */
#include "../ckadai60/SelectSort.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000
static long a[N];
void SelecSort(long n, long a[])
{
	long i,j,k,min;
	for(i = 0; i < n -1 ; i++)
	{
		min = a[i];
		k = i;
		for(j = i + 1; j < n; j++)
		{
			if(a[j] < min)
			{
				min = a[j];
				k = j;
			}
		}
		a[k] = a[i];
		a[i] = min;
	}
}
void Test_Spead()
{
		static long i;
		time_t s;
		clock_t t1,t2;
		time(&s);
		srand(s);
		for(i = 0; i<N ; i++)
		{
			a[i] = rand() % N;
		}
		t1 = clock();
		SelecSort(N,a);
		t2 = clock();
		printf("sorting in 10000 Array time is \n");
		printf("Finish Sorting time is = ");
		printf("%.2fsec \n",(double)(t2-t1));
		printf("\n");


}

void DisplaySelectSort()
{
	int i;
	   printf("[");

	   // navigate through all items
	   for(i = 0; i < N; i++) {
	      printf("%d ",a[i]);
	   }

	   printf("]\n");
}

