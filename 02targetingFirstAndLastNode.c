#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

// creating global first and last struct pointer and assigning the inital and final node to it later,
nd *first;
nd *last;

// now we now don't need to pass any argument in this function because "one" will be same as "first" after line no 25.
void traverse();

int main()
{
    nd *one, *two, *three;

    one = (nd *)malloc(sizeof(nd));
    two = (nd *)malloc(sizeof(nd));
    three = (nd *)malloc(sizeof(nd));
    first = one;  // now first and one is same . i.e first->data is same as one->data and so on
    last = three; // and now last and three is same

    one->data = 10;
    one->next = two;
    two->data = 20;
    two->next = three;
    three->data = 30;
    three->next = NULL;
    traverse();
    getch();
    return 0;
}

void traverse()
{
    int i = 1;
    nd *temp = first; // so that we don't perform operation directly on first(it shouldnot be changed directly like so)
    while (temp != NULL)
    {
        printf("data of node %d: %d\n", i, temp->data);
        temp = temp->next;
        i++;
    }
}