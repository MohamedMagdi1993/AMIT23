#include <stdio.h>
#include <stdlib.h>

int LinearSearch (int a[], int size , int data) ;
int BinarySearch(int a[],int size ,int data);
int count = 0 ;
void SelSort (int a[],int size) ;
int GetMin (int a[] , int size , int start);
void Bubblesort (int a[], int size);
int main()
{
    int ValueToBeFound = 0; // Used as user input
    int myArray[30] ={1} ; //
    int myArray2[21] = {5} ;
    int myArray3[10] = {5,9,8,200,6,2,12,3,13,12};
    int myArray4[10] = {5,9,8,200,6,2,12,3,13,12};
    int i =0 ;
    for (i = 1 ;i <30 ; i++)
    {
        myArray[i] = myArray[i-1] * 2 ; // Each element in myArray is double the previous element
        if (i<21)  myArray2[i] = myArray2[i-1] +1 ; // Each element in myArray2 is greater than the previous by one
    }

    printf("Enter Your Search ");
    scanf("%d",&ValueToBeFound) ;  // Value to be found

/* ************************************************************************************ */
/*  find where the occurrence of ValueToBeFound in myArray using linear search */
   int result = LinearSearch(myArray,sizeof(myArray)/sizeof(int),ValueToBeFound);
/* ************************************************************************************ */

/* ************************************************************************************ */
/*  find where the occurrence of ValueToBeFound in myArray using Binary search */
   int result2 = BinarySearch(myArray2,sizeof(myArray2)/sizeof(int),ValueToBeFound);
/* ************************************************************************************ */

/* ************************************************************************************ */
   SelSort(myArray3,10) ;
/* ************************************************************************************ */


/* ************************************************************************************ */
   Bubblesort(myArray4,10) ;
/* ************************************************************************************ */

/* ************************************************************************************ */
if (result!= -1) printf(" \nScanned Value is located at index %d using linear search ",result);
else printf(" \nScanned Value is Not Found   ");
/* ************************************************************************************ */

/* ************************************************************************************ */
if (result2!= -1) printf(" \nScanned Value is located at index %d using binary search  ",result2);
else printf(" \nScanned Value is Not Found   ");
/* ************************************************************************************ */

/* ************************************************************************************ */
 printf("\nSorted Array using Selection Sort");
   for (i = 0 ; i<10 ; i++)
   {
       printf("\n myArray3[%d] = %d",i , myArray3[i]);
   }
/* ************************************************************************************ */

/* ************************************************************************************ */
 printf("\nSorted Array using Bubble Sort");
   for (i = 0 ; i<10 ; i++)
   {
       printf("\n myArray4[%d] = %d",i , myArray4[i]);
   }
/* ************************************************************************************ */


    return 0;
}
int LinearSearch (int a[], int size , int data)
{
    int index = -1 ,i;

    for (i= 0 ; i<size ; i++)
    {
        if (data == a[i]) index = i ;

    }
    return index ;
}


int BinarySearch(int a[],int size ,int data)
{
    int first = 0 ;
    int last = size -1 ;
    int mid = (first +last-1) /2;
    int flag = 0 ;
    int index = -1 ;
    while (!flag && (last>first) )
    {
        mid = (first +last-1) /2 ;
        if (a[mid] == data)
        {
            flag = 1 ;
            index = mid ;
        }
        else if (a[mid] < data)
        {
            flag = 0 ;
            first = mid +1 ;
        }
        else
        {
            flag = 0 ;
            last = mid -1 ;
        }
    }
    return index ;
}


void SelSort (int a[],int size)
{
    int i =0 ;
    int j = 0 ;
    int min = 0 ,temp;
    int index = -1 ;
    for (i=0 ; i<size ; i++)
    {
     index =  GetMin(a,size,i) ;
     temp = a[i];
     a[i] = a[index];
     a[index] =temp ;
    }


}


int GetMin (int a[] , int size , int start)
{
    int i = 0, index = start ;
    int min = a[start] ;
    for (i = start ; i< size ; i++)
    {
        if (a[i] < min)
        {
            min = a[i] ;
            index = i ;
        }
    }

    return index ;
}


void Bubblesort (int a[], int size)
{
    int i , j, temp ;

    for (i = 0 ; i<size-1 ; i++)
    {
        for (j= 0 ; j <size-1-i ; j++ )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1] ;
                a[j+1] = temp ;

            }
        }
    }

}
