#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3 

typedef struct stack{
    int data[MAX];
    int tos;
}stack;



void push(stack*,int);
void pop(stack*);
void display(stack*);

int main()
{
    int userChoice;
    int data;
    stack first;
    first.tos=-1;
    while(1)
    {//infinite loop because we will have exit function inside
        system("cls");//will clear terminal 
        printf("\n\t\tStack ControlPanel\t\t\n1.create a stack\n2.push data to stack\n3.pop data from stack\n4.display stack\n5.exit\n\nYour Choice:");
        scanf("%d",&userChoice);
        system("cls");//will clear terminal 

        switch(userChoice)
        {
            case 1:
            {
                char name[15];
                printf("name your stack:");
                scanf("%s",&name);
                system("cls");
                //will work on this a bit later;
                break;
            }
            case 2:
                printf("enter the data:");
                scanf("%d",&data);
                push(&first,data);
                system("cls");
                break;

            case 3:
                pop(&first);
                system("cls");
                break;
            
            case 4:
                display(&first);
                system("cls");
                break;

            case 5:
               exit(0);
                break;

            default:
                printf("wrong input");
                break;

        }

    };
    return 0;
}


void push(stack* s, int d)
{
    system("cls");
    if((s->tos+1)==MAX)
    {
        printf("stack is full.\npress any key to continue...");
        getch();
    }
    else
    {
        ++s->tos;
        s->data[s->tos]=d;
        printf("%d was pushed to the stack.\npress any key to continue...",d);
        getch();
    }
}

void pop(stack *s)
{
    system("cls");
    if(s->tos==-1)
    {
       printf("stack is already empty.\npress any key to continue...");
       getch();
    }
    else
    {
        printf("data at %d index was removed.\npress any key to continue...",s->tos--);
        getch();
    }
}

void display(stack *s)
{
    if(s->tos==-1)
    {
        printf("stack is empty.\npress any key to continue...");
        getch();
    }
    else{
        printf("\ndata and index:\n");
        for(int i=s->tos;i>-1;i--)
        {
            printf("\n%8d %2d\n",s->data[i],i);
        }
        printf("\n\n\n\npress any key to continue...");
        getch();
        system("cls");
    }
}