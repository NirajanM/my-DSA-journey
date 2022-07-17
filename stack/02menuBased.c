#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3 

typedef struct stack{
    int data[MAX];
    int tos;
}stack;

stack s;

void displayTopElement();
void push(int);
void pop();
void display();

int main()
{
    s.tos=-1;
    int userChoice;
    int data;
    stack first;
    
    first.tos=-1;
    while(1)
    {//infinite loop because we will have exit function inside
        system("cls");//will clear terminal 
        printf("\n\t\tStack ControlPanel\t\t\n1.display the top element of stack\n2.push data to stack\n3.pop data from stack\n4.display stack\n5.exit\n\nYour Choice:");
        scanf("%d",&userChoice);
        system("cls");//will clear terminal 

        switch(userChoice)
        {
            case 1:
            {
                displayTopElement();
                break;
            }
            case 2:
                printf("enter the data:");
                scanf("%d",&data);
                push(data);
                system("cls");
                break;

            case 3:
                pop();
                system("cls");
                break;
            
            case 4:
                display();
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


void push(int d)
{
    system("cls");
    if((s.tos+1)==MAX)
    {
        printf("stack is full.\npress any key to continue...");
        getch();
    }
    else
    {
        ++s.tos;
        s.data[s.tos]=d;
        printf("%d was pushed to the stack.\npress any key to continue...",d);
        getch();
    }
}

void pop()
{
    system("cls");
    if(s.tos==-1)
    {
       printf("stack is already empty.\npress any key to continue...");
       getch();
    }
    else
    {
        printf("data %d at %d index was removed.\npress any key to continue...",s.data,s.tos--);
        getch();
    }
}

void display()
{
    if(s.tos==-1)
    {
        printf("stack is empty.\npress any key to continue...");
        getch();
    }
    else{
        printf("\ndata and index:\n");
        for(int i=s.tos;i>-1;i--)
        {
            printf("\n%8d %2d\n",s.data[i],i);
        }
        printf("\n\n\n\npress any key to continue...");
        getch();
        system("cls");
    }
}
