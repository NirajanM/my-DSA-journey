#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *first = NULL;
node *last = NULL;

createNode(int data)
{
    node *initialize = (node *)malloc(sizeof(node));
    initialize->data = data;
    first = initialize;
}
int main()
{
    return 0;
}