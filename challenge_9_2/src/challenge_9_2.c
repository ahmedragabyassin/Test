/*
 ============================================================================
 Name        : challenge_9_2.c
 Author      : Yassin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Merge_Sort.h"


/*
 * Team Members: Yassin and Elgazzar
 */


int main(void) {

    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);
   // merge(arr,0,(arr_size-1)/2,arr_size-1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
