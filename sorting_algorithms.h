#ifndef SORTING_ALGORITHMS_H_
#define SORTING_ALGORITHMS_H_

extern int BUBBLESORT(int *arr,int arr_n);		
extern int selectionSort(int *arr,int arr_n);
extern int insertionSort(int *arr,int arr_n);
extern int mergeSort(int *arr,int arr_n);
extern int quickSort(int *arr,int arr_n);
extern int heapSort(int *arr,int arr_n);
extern int merge(int arr[],int l[],int r[],int l_l,int r_l);

static int count=0;						//used to count globally

#define EXITSUCCESS 0
#define EXITFAILURE 1
#define ENTRY 1						//used to excute ones
#define SIZEOFINT sizeof(int)
#define SIZEOFCHAR sizeof(char)
#define INTMAL	(int*)malloc(n*sizeof(int))
#define CHARMAL (char*)malloc(n*sizeof(char))
#define FREE free(arr)						//only used when arr variable is passed

#endif






















































































