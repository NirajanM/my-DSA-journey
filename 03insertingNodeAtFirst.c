#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

nd *first = NULL, *last = NULL;
void traverse();

void insertAtFirst(int);

int main()
{
    nd *one, *two, *three;

    one = (nd *)malloc(sizeof(nd));
    two = (nd *)malloc(sizeof(nd));
    three = (nd *)malloc(sizeof(nd));
    first = one;
    last = three;

    // one->data = 10;
    // one->next = two;
    // two->data = 20;
    // two->next = three;
    // three->data = 30;
    // three->next = NULL;
    insertAtFirst(6);
    insertAtFirst(0);
    getch();
    return 0;
}

void traverse()
{
    int i = 1;
    nd *temp = first;
    while (temp != NULL)
    {
        printf("data of node %d: %d\n", i, temp->data);
        temp = temp->next;
        i++;
    }
}

void insertAtFirst(int data)
{
    nd *newNode;
    newNode = (nd *)malloc(sizeof(nd));
    newNode->data = data;
    if (first == NULL)
    {
        first = newNode;
        last = newNode;
    }
    else
    {
        newNode->next = first;
        first = newNode;
    }
    traverse();
}