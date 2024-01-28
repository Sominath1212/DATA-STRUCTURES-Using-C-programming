/*write a program for dynamic sstack*/
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
    printf("\n********STACK***********\n");
    temp = first;
    while (temp != NULL)
    {
        printf("|%d|\n", temp->data);
        temp = temp->next;
    }

    printf("\n-----------------------\n");
} // end of method

void push()
{

    struct node *nn, *temp;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->next = NULL;
    printf("Enter data for node =\n");
    scanf("%d", &nn->data);
    if (first == NULL)
    {
        printf("stack is created\n");
        first = nn;
    }
    else
    {
        nn->next = first;
        first = nn;
        printf("element are pushed \n");
        display();
    }

} // end of method
void pop()
{
    struct node *temp, *temp2;
    if (first == NULL)
    {
        printf("no such stack present\n");
    }
    else
    {
        first = first->next;
        printf("element are popped");
        display();
    }

} // end of method
int main()
{
    int ch;
    do
    {
        printf("1.push \n");
        printf("2.pop\n");

        printf("3.exit\n");
        printf("Enter your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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