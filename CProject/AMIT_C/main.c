#include <stdio.h>
#include <stdlib.h>
#include "math.h"

#include <string.h>
void edit (int* x)
{
char * x_ptr = (char*)x ;
(*x_ptr)++ ;
  x_ptr++;
  (*x_ptr)++ ;
  x_ptr++;
  (*x_ptr)++ ;

return;
}
int main(void)
{

unsigned int x= 0x11223344 ;
char * p = (char*) &x ;
printf(" pointer is %p Value is %x\n",p,*p) ;
/*++p ;
printf(" pointer is %p Value is %x\n",p,*p) ;
p++ ;
printf(" pointer is %p Value is %x\n",p,*p) ;
*/
*p++;
printf(" pointer is %p Value is %x\n",p,*p) ;


*++p ;
printf(" pointer is %p Value is %x\n",p,*p) ;
(*p)++;
printf(" pointer is %p Value is %x\n",p,*p) ;

++*p;
printf(" pointer is %p Value is %x\n",p,*p) ;

int result = strcmp("Hellox","Helloy");
//printf("\nresult= %d",result) ;

unsigned int sizeTest [10] ;
result = sizeof(sizeTest);
printf("\nresult= %d\n",result) ;

int assignment = 0x00 ;
char * assign_ptr = &assignment ;
*assign_ptr = 5 ;
assign_ptr++ ;
*assign_ptr = 20 ;
assign_ptr++ ;
*assign_ptr = 80 ;

edit(&assignment);
assign_ptr = &assignment ;
printf("first number = %d\n",*assign_ptr++);
printf("second number = %d\n",*assign_ptr++);
printf("third number = %d\n",*assign_ptr);

/*
int y = 0x52070;
char *ptr = (char * ) &y ;
printf("%x\n",(char)*ptr);
ptr++;
printf("%x\n",*ptr);
ptr++;
printf("%x\n",*ptr);*/
    return 0 ;

}
