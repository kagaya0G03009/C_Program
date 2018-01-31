/*
 * SelectSort.c
 *
 *  Created on: Jan 30, 2018
 *      Author: kagaya
 */
#include "SelectSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

