#include <stdio.h>
#include <stdlib.h>
#include "sort.c"


int main(){


    printf("Enter the size for the array.\n");
    int n;
    scanf("%d", &n);


    int *arr = (int*) malloc(n*sizeof(int));
    if (arr != NULL)
    {
        printf("Memory Allocation sucessful.\n");
    }
    

    printf("Now enter the values for the array.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    int left = 0;
    int right = n-1;


    mergesort(arr, left, right);


    printf("Sorted array...\n");
    printarray(arr, n);

    free(arr);
    printf("Memory freed.\n");
    


}


