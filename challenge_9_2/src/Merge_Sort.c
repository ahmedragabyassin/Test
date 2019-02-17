/*********************************************************************************
 *
 *  Merge_Sort.c
 *  Author: Ahmed Nofal, Avelabs Embedded software R&D crew
 *
 ********************************************************************************/



/****************************[Problem Description]*********************************
 *
 * As per explained algorithm, complete the below code to implement a fully
 * functional merge sort code
 *
 ********************************************************************************/
#include <stdio.h>
#include "Merge_Sort.h"

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int left, int middle, int right)
{
	//printf("Merg");
    /* Variables to hold the values of the sizes of the two sub-arrays */
	int i,j,k;
	int l_size = middle-left+1;
	int r_size = right-middle;

    /* create temp sub-arrays of sizes that you got when you divided the large array */
	int R_arr[r_size];
	int L_arr[l_size];
    /* Copy data to temp arrays L[] and R[] */
	for(i=0; i<l_size; i++)
	{
		L_arr[i] = arr[left+i];
	}
	for(j=0; j<r_size; j++)
	{
		R_arr[j] = arr[middle+1+j];
	}
    /* Merge the temp arrays back into arr[l..r]*/
	i=0;
	j=0;
	k=left;
	while((i < l_size) && (j < r_size))
	{
		if(L_arr[i] >= R_arr[j])
		{
			arr[k] = R_arr[j];
			j++;
		}
		else
		{
			arr[k] = L_arr[i];
			i++;
		}
		k++;
	}

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < l_size)
    {
        arr[k] = L_arr[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < r_size)
    {
        arr[k] = R_arr[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if(l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

