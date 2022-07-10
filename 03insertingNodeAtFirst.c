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
    insertAtFirst(5);
    traverse();
    insertAtFirst(5);
    traverse();
    getch();
    return 0;
}

void traverse()
{
    int i = 1;
    nd *temp;
    if (first == NULL)
    {
        printf("linklist is empty");
    }
    else
    {
        temp = first;
        while (temp != NULL)
        {
            printf("data of node %d: %d\n", i, temp->data);
            temp = temp->next;
            i++;
        }
    }
}

void insertAtFirst(int data)
{
    nd *newNode;
    newNode = (nd *)malloc(sizeof(nd));
    newNode->data = data;
    if (first == NULL)
    {
        newNode->next = NULL; // yo line xutera traverse ma prob aako raixa infinite loop wala
        first = newNode;
        last = newNode;
    }
    else
    {
        newNode->next = first;
        first = newNode;
    }
}