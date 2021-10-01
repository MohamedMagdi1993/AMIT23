#include <stdio.h>
 int m = 12  ;
int Add (int x , int y )
{
    return x+y ;
}

int Sub (int x , int y )
{
    m++ ;
    printf("\n m = %d ",m) ;
    return x-y ;
}


int Mul (int x , int y )
{
    return x*y ;
}

int Div (int x , int y)
{
    return x/y ;
}


int Rem (int x , int y )
{
    return x%y ;
}

int factorial(int x){
    int e=1;
    int i;
    for(i=x;i>=1;i--){
        e=e*i;

    }
    return e;
}
