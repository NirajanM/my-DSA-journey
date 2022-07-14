//now let's try the final goal for single link list: A menu based program in the best way possible on our own
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

void traverse(nd *);
void insertAtFirst(nd *,int);
int main()
{
    int userChoice;
    int data;
    nd *head=NULL;
    while(1)
    {//infinite loop because we will have exit function inside
        printf("LinkList ControlPanel\n1.insert node at first\n2.insert node at last\n3.insert node at Nth position\n4.delete first node\n5.delete last node\n6.delete Nth node\n7.display all data of node\n8.exit\n\nYour Choice:");
        scanf("%d",&userChoice);

        switch(userChoice)
        {
            case 1:
                printf("enter the data:");
                scanf("%d",&data);
                insertAtFirst(head,data);
                break;

            case 7:
                traverse(head);
                break;

            case 8:
               exit(0);
                break;

            default:
                printf("wrong input");
                break;

        }

    };

    getch();
    return 0;
}

void traverse(nd *head)
{
    if(head==NULL)
    {
        printf("\nlink list is empty\n\n");
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
void insertAtFirst(nd *first,int data){
    if(first==NULL)
    {
        first= (nd*)malloc(sizeof(nd));//this was causing the error at first
        first->data=data;
        first->next=NULL;
    }
    else{
        nd *temp = (nd*)malloc(sizeof(nd));
        temp->data=data;
        temp->next=first;
        first=temp;
    }
}