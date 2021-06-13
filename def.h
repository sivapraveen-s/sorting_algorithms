#ifndef DEF_H_
#define DEF_H_

/*
 *********************************************************************************************************************
 * define - which are the sorting algorithm you are going to implement inside.
 * undefine - which are the sorting algorithm you are going to implement inside.
 *
 *********************************************************************************************************************
 */
 
#define SWAP
#define BUBBLESORT
#define SELECTIONSORT
#define INSERTIONSORT
#define MERGESORT
#define QUICKSORT
#define HEAPSORT






































#endif




/*Notes



slow algorithm- sequential search (it can be replace  with binary search or hash lookup)
slow algorithm- insertion or bubble sort (it can be replace with quick sort,merge sort,radix sort
	if you'ill be doing a lot of insertions and deletions at random places then a linked list would be good.





/*
 ********************************************************************
 *
 *
 *
 *
 ********************************************************************
 */
/*
INSERTION SORT:

Complexity:

Time Complexities:

Worst Case Complexity: O(n2)
Suppose, an array is in ascending order, and you want to sort it in descending order.
In this case, worst case complexity occurs.
Each element has to be compared with each of the other elements so, 
for every nth element, (n-1) number of comparisons are made.
Thus, the total number of comparisons = n*(n-1) ~ n2

Best Case Complexity: O(n)
When the array is already sorted, the outer loop runs for n number of times whereas the inner loop 
does not run at all. So, there are only n number of comparisons. Thus, complexity is linear.

Average Case Complexity: O(n2)
It occurs when the elements of an array are in jumbled order (neither ascending nor descending).

Space Complexity:
Space complexity is O(1) because an extra variable key is used.

Insertion Sort Applications
The insertion sort is used when:
the array is has a small number of elements
there are only a few elements left to be sorted



//



//intialy it is combined we need create a header file with memory constraint with code optimization 

#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int *a,int n);
int selection_sort(int *a,int n);
int insertion_sort(int *a,int n);

int main()
{
    int n,*a;
    printf("User defined Creditionals...\n");
    printf("Enter the number of values to be entered in array: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        printf("\nMemory allocation not successfull...");
    }
    else
    {
        printf("\nMemory allocation successfull...");
    }
    printf("\nEnter the values for the array  to be sorted: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe entered array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    //use one at a time bcoz here array values stored in a it will be already sorted when first sorting algo excuted
    
    //printf("\n\t\t\t***Bubble Sorting Algorithm***\t\t\t");
    //bubble_sort(a,n);
    //printf("\n\t\t\t***Selection Sorting Algorithm***\t\t\t");
    //selection_sort(a,n);
    //printf("\n\t\t\t***insertion Sorting Algorithm***\t\t\t");
    //insertion_sort(a,n);
    return 0;
}



	

int bubble_sort(int *a,int n)                   //a=array, n=user defined array element size
{
    int temp,i,j;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array (bubble_sort): ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}








int selection_sort(int *a,int n)
{
    int temp,element_pos,i,j;
    
    for(i=0;i<n-1;i++)
    {
        element_pos=i;                      //use i has minimun element for first and so one
        for(j=i+1;j<n;j++)
        {
            if(a[element_pos]>a[j])         //checking the adjacent element in the array to find the minimum element_pos
            element_pos=j;
        }
        if(element_pos!=i)                  //if its i is the minimum element it is directly passed otherwise it will swap the adjacent element in the std::array<T, N> ; 
        {
            temp=a[i];
            a[i]=a[element_pos];
            a[element_pos]=temp;
        }
    }
    printf("\nThe sorted array (selection_sort): ");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
}


int insertion_sort(int *a,int n)
{
    int array_i;
    for(array_i=1;array_i<n;array_i++)
    {
        int key=a[array_i];
        int j=array_i-1;
            
        while(array_i<a[j] && j>=0)
        {
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;                             // this time j is in -1 so we need to add one
    }
    printf("\nThe sorted array (insertion_sort): ");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    return 0;
}
*/

/*
 ********************************************************************
 *
 *
 *
 *
 ********************************************************************
 */







