/*
 * Quick_Sort.c
 *
 *  Created on: Feb 1, 2018
 *      Author: kagaya
 */

// quickSort.c
#include <stdio.h>
#include <time.h>

#define N 10000
static long a[N];

void Test_Speed_Quick_Sort()
{


	int i;
	time_t s;
	clock_t t1,t2;
	time(&s);
	srand(s);
	for(i = 0; i<N ; i++)
	{
	a[i] = rand() % N;
	}
	printf("\n\nUnsorted array is: \n ");
		for(i = 0; i < N; i++){
			printf(" %d ", a[i]);
		}

	t1 = clock();
	quickSort(0,N-1);
	t2 = clock();
	printf("Quick_Sort  \n");
	printf("\n");
	printf("\n\ Finish Sorting nSorted array is: \n ");
		for(i = 0; i < N; i++){
			printf(" %d ", a[i]);
		}
	printf("\n");
	printf("sorting in %d Array time is \n",N);
	printf("Finish Sorting time is = ");
	printf("%.2fsec \n",(double)(t2-t1));
	printf("\n");






}







long partition(long left, long right)
{
    int pivot_element = a[left];
    int lb = left, ub = right;
    int temp;

    while (left < right)
    {
        while(a[left] <= pivot_element)
            left++;
        while(a[right] > pivot_element)
            right--;
        if (left < right)
        {
            temp        = a[left];
            a[left]  = a[right];
            a[right] = temp;
        }
    }
    a[lb] = a[right];
    a[right] = pivot_element;
    return right;
}

void quickSort(long left, long right)
{
    if (left < right)
    {
        long pivot = partition(left, right);
        quickSort(left, pivot-1);
        quickSort(pivot+1, right);
    }
}




