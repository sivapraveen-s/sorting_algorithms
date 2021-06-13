#include<stdio.h>
#include<stdlib.h>
#include "sorting_algorithms.h"

int main()
{
	int i,j,sort_selection=0,arr_n,arr_size;
	int *arr;
	printf("Please select which sorting algorithm you need to proceed!\n");
	printf("\nPress 1- Bubble Sort, 2- Selection Sort, 3- Insertion Sort, 4- Merge Sort, 5- Quick Sort, 6- Heap Sort, 7- radix sort //todo// :");
	scanf("%d",&sort_selection);

	printf("\nEnter the Number of elements to be sorted in the array: ");
	scanf("%d",&arr_n);
	arr=(int*)malloc(arr_n*sizeof(int));
	printf("\nEnter the elements of an array: ");
	for(i=0;i<arr_n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEntered Elements are: ");
	for(i=0;i<arr_n;i++)
	{
		printf("%d ",arr[i]);	
	}
	
	//algorthim proceeds
	if(sort_selection==1)
	{
	    bubbleSort(arr,arr_n);
	}
	if(sort_selection==2)
	{
		selectionSort(arr,arr_n);
	}
	if(sort_selection==3)
	{
		insertionSort(arr,arr_n);
	}
	if(sort_selection==4)
	{
		mergeSort(arr,arr_n);
	}
	if(sort_selection==5)
	{
		quickSort(arr,arr_n);		
	}
	if(sort_selection==6)
	{
		heapSort(arr,arr_n);
	}
	if(sort_selection==7)
	{
		radixSort(arr,arr_n);
	}
		
	/* todo
	if(sort_selection==n)
	{
		#define 
	}
	*/   
}








