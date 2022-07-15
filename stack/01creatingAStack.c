//note: I might update this same code to my github using version control or might create another file for another concept
#include<stdio.h>
#define MAX 3 //we can now use this to create array and later stack

//creating stack using structure
typedef struct stack{
    int data[MAX];
    int tos;
}stack;

int main()
{
    stack first;
    first.tos=-1;//as index of array start from 0, I am using -1 as the first index to showcase the underflow of stack
    //i.e index of empty stack 
    pop(first);//even though we are working with only one stack, this method can be applied to multiple stack program , just pass the stack you want to perform operation on as first parameter.

    //we have to write code such that line no 16 must throw some error as stack is already empty as first.

    push(first,10);
    push(first,20);
    push(first,30);
    push(first,40);//code should be such that this must throw error as stack can only hold 3 element for now
    return 0;
}