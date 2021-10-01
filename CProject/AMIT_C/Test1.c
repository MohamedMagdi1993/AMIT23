#include <stdio.h>

 extern int m ;
int Add2 (int x , int y )
{
    m++ ;
    printf("\n m = %d ",m) ;
    return x+y;
}


