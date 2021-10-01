#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
int BinarySearch(int arr[SIZE],int data);
int main()
{

   int myArray[SIZE]= {1};
   for (int i = 0 ; i<SIZE ; i++)
   {
       myArray[i] = myArray[i-1] +1 ;
   }
   11

   // printf("Hello world!\n");
    return 0;
}
/*
int BinarySearch(int arr[SIZE],int data)
{
    int flag = 0 ;
    int first = 0 ;
    int last = SIZE-1 ;
    int index  = 0;
    while ((first <= last) && !flag)
    {
     mid =   (first + last)  /2
    }
    if (data == arr[index])
    {
        flag = 1
    }
    else if (data < arr[index])
    {
        flag = 0 ;
        index = index/2 ;
    }
    else if (data > arr[index])
    {
        flag = 0 ;
        index = (lindex+last )
    }
}*/
