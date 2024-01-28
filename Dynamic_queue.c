/*write a program for create dynamic queue*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *first = NULL;
void display()
{
    struct node *temp;

    printf("\n-----------------------\n");
    printf("\n********QUEUE***********\n");
    temp = first;
    while (temp != NULL)
    {
        printf("|%d|\t", temp->data);
        temp = temp->next;
    }

    printf("\n-----------------------\n");
} // end of method

void Enqueue()
{

    struct node *nn, *temp;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->next = NULL;
    printf("Enter data for node =\n");
    scanf("%d", &nn->data);
    if (first == NULL)
    {
        printf("Queue is created\n");
        first = nn;
    }
    else
    {
        temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nn;

        printf("element are Enqueued \n");
        display();
    }

} // end of method
void Dequeue()
{
    struct node *temp;
    if (first == NULL)
    {
        printf("no such Queue present\n");
    }
    else
    {
        first = first->next;

        printf("element are dequeued");
        display();
    }

} // end of method
int main()
{
    int ch;
    do
    {
        printf("1.Enqueue \n");
        printf("2.Dequeue\n");

        printf("3.exit\n");
        printf("Enter your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;

        case 3:
            exit(0);
            break;
        default:
            printf("ivalid choice\n");
            break;
        }
    } while (1);

    return 0;
}