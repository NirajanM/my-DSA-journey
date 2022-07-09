#include <stdio.h>
#include <conio.h>  //includes getch() function
#include <stdlib.h> //includes memory allocation functions

// this is how we create a node, it holds one data and one memory adress of it's next node
typedef struct node
{
    int data;
    struct node *next;
} nd; // renaming struct node with nd using "typedef ...{...}name;" ,so that we don't have to write "struct node " literally everywhere and instead we cound use just "nd" in place of "struct node"

void traverse(nd *); // prototype of function , we can also write the whole function here but for better readability i.e reading the content of main() first we will just declare the prototype here and define the function after main()

int main()
{
    // creating nodes
    nd *first, *second, *third;

    // allocating memory to nodes
    first = (nd *)malloc(sizeof(nd));
    second = (nd *)malloc(sizeof(nd));
    third = (nd *)malloc(sizeof(nd));

    // hard coding the data of 3 nodes
    first->data = 10;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL; // this indicates the ending of linklist

    // calling traverse function to print the data hold by link list and passing address of first node as argument
    traverse(first);
    getch(); // holds the screen until user press some key. required in old compilers
    return 0;
}

// definition of function
void traverse(nd *randomNameOfArgumentPassed)
{
    int i = 1; // to use inside loop

    while (randomNameOfArgumentPassed != NULL)
    {
        printf("data of node %d: %d\n", i, randomNameOfArgumentPassed->data);
        randomNameOfArgumentPassed = randomNameOfArgumentPassed->next;
        // to go through the every element of link list we continuously change the address of next node in this pointer, if not declared loop will be a infinite loop

        i++; // increamenting value of i by one everytime the loop runs

    } // this will run until last node i.e. until it founds null
}