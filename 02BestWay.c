//actually we don't need global node pointers, they will just take much space, we can simply pass the head pointer as argument in function
//and we will only create two pointers for the whole list for best memory management, this is the right way I guess.
//I guess I didnot understand the concept from our book at first and after watching many videos this is the conclusion:
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

// we don't need these:
// nd *first;
// nd *last;

void traverse(nd *head);//prototype of the function with intial node address as a parameter

int main()
{
    nd *head;
    head = (nd *)malloc(sizeof(nd));//head is pointing to the initial address of allocated memory of node
    head->data = 10;
    head->next = NULL;

    nd *current;//the only two pointers that we actually need (head and current/last whatever the name is)
    current = malloc(sizeof(nd));//we don't even need to typecast although it is a good practise
    current->data = 20;
    current->next = NULL;
    head->next=current;//so that our first node holds the address of the second

    current = malloc(sizeof(nd));
    current->data = 30;
    current->next = NULL;
    head->next->next = current;
    // head = first node address , head->next = second node address , head->next->next = third node address .......

    traverse(head);
    getch();
    return 0;
}

void traverse(nd *head)
{
    if(head==NULL)
    {
        printf("link list is empty");
    }
    else
    {
        while(head!=NULL)
        {
            printf("%d ",head->data);
            head=head->next;
        }

    }
}