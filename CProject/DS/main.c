#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int count = 0 ;
struct node
{
    struct node * pNext;
    int data;
};
struct node * pHead;
struct node * pTail;

struct node* createnode(int data)
{
    struct node *ptr=NULL;
    if(count<SIZE)
    {
        ptr=(struct node*) malloc(sizeof(struct node));
        if(ptr)
        {
            count++;
            ptr->data=data;
            ptr->pNext=NULL;
        }
    }
return ptr;
}


int pop(int* data)
{
    struct node * pCur=pHead;
    int flag=0;
    if(pCur)
    {
        pHead=pHead->pNext;
        *data=pCur->data;
        free(pCur); count--;
        flag=1;
    }
    return flag;
}

int push (int data)
{
    int flag  = 0 ;
    struct node *ptr = createnode(data) ;

    if (ptr)
    {
                flag = 1 ;
        if (!pHead) pHead = ptr ;
        else
        {
            ptr->pNext = pHead ;
            pHead = ptr ;
        }
    }
    return flag ;
}

int main()
{
    /*
int x[15] = {0} ;
int j = 0 ;
for (j=0 ; j< 15 ; j++)
{
    scanf("%d",&x[j]);
    if (push(x[j]))
    {
        printf("Push is Done \n") ;
    }
    else
    {
        printf("Stack Overflow \n") ;
    }
}

int result  = 0  ;
for (j= 0 ; j < SIZE+1 ;j++)
{
    if (pop(&result))
    {
        printf("PoP Value %d",result) ;
    }
    else
    {
        printf("Data Corupted") ;
    }
}*/
    return 0;
}
