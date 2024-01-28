/*write a program for dounbly circular linked list*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *first = NULL;
void display()
{

    struct node *temp;
    printf("\n********LIST********\n");
    printf("\n------------------------\n");
    temp = first;
    do
    {
        printf("|%d|\t", temp->data);
        temp = temp->next;
    } while (temp != first);
    printf("\n------------------------\n");
} // end of method
void insert()
{
    struct node *temp, *nn, *temp2;
    int ch, sele;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->next = NULL;
    nn->prev = NULL;
    printf("Enter data for node =\n");
    scanf("%d", &nn->data);
    if (first == NULL)
    {
        printf("list is created..!\n");
        first = nn;
        nn->next = nn;
        nn->prev = nn;
    }
    else
    {
        printf("1.insert at first position\n");
        printf("2.insert at last position\n");
        printf("3.insert at specific position\n");
        printf("Enter your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            temp = first;
            do
            {
                temp = temp->next;
            } while (temp->next != first);
            nn->prev = temp;
            nn->next = first;
            temp->next = nn;
            first = nn;
            printf("node place at first position\n");
            display();
            break;
        case 2:
            temp = first;
            do
            {
                temp = temp->next;
            } while (temp->next != first);
            nn->prev = temp;
            nn->next = first;
            temp->next = nn;
            first->prev = nn;
            printf("node place at last position\n");
            display();
            break;
        case 3:
            printf("Enter node which you want add node after that=\n");
            scanf("%d", &sele);
            temp = first;
            do
            {
                if (temp->data == sele)
                {
                    break;
                }
                temp = temp->next;
            } while (temp->next != first);

            if (temp->next == first && temp->data != sele)
            {
                printf("no such node found\n");
            }
            else
            {
                if (temp->data == sele && temp == first)
                {
                    temp2 = first;
                    do
                    {
                        temp2 = temp2->next;
                    } while (temp2->next != first);
                    nn->prev = temp2;
                    nn->next = first;
                    temp2->next = nn;
                    first->prev = nn;
                    first = nn;
                    printf("node place at specific position\n");
                    display();
                }
                else if (temp->data == sele && temp->next == first)
                {
                    temp2 = first;
                    do
                    {
                        temp2 = temp2->next;
                    } while (temp2->next != first);
                    nn->prev = temp2;
                    nn->next = first;
                    temp2->next = nn;
                    first->prev = nn;
                    printf("node place at specific  position\n");
                    display();
                }
                else
                {
                    nn->next = temp->next;
                    nn->prev = temp;
                    temp->next = nn;
                    (temp->next)->prev = nn;
                    printf("node place at specific position\n");
                    display();
                }
            }

            break;
        default:
            printf("invalid choice\n");
            break;
        }
    }

} // end of method
void delete()
{
    struct node *temp, *temp2;
    int ch, sele;
    if (first == NULL)
    {
        printf("no such list present \n");
    }
    else
    {
        printf("1.delete first node \n");
        printf("2.delete last node \n");
        printf("3.delete specific node \n");
        printf("Enter your choice=\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            temp = first;
            do
            {
                temp = temp->next;
            } while (temp->next != first);
            temp->next = first->next;
            first = first->next;
            first->prev = temp;
            printf("first node delete from list \n");
            display();
            break;

        case 2:
            temp = first;
            do
            {
                temp = temp->next;
            } while (temp->next != first);
            temp2 = first;
            do
            {
                temp2 = temp2->next;
            } while (temp2->next != temp);
            temp2->next = first;
            first->prev = temp2;
            free(temp);
            printf("last node is deleted \n");
            display();
            break;

        case 3:
            printf("Enter node which you want to delete =\n");
            scanf("%d", &sele);
            temp = first;
            do
            {
                if (temp->data == sele)
                {
                    break;
                }

                temp = temp->next;
            } while (temp->next != first);

            if (temp->next == first && temp->data != sele)
            {
                printf("no such node found\n");
            }
            else
            {
                if (temp == first)
                {
                    temp2 = first;
                    do
                    {
                        temp2 = temp2->next;
                    } while (temp2->next != first);
                    temp2->next = first->next;
                    first = first->next;
                    first->prev = temp2;
                    printf("specific node is delete \n");
                    display();
                }
                else if (temp->next == first && temp->data == sele)
                {
                    temp2 = first;
                    do
                    {
                        temp2 = temp2->next;
                    } while (temp2->next != temp);
                    temp2->next = first;
                    first->prev = temp2;
                    free(temp);
                    printf("specific node is delete from list  \n");
                    display();
                }
                else
                {
                    temp2 = first;
                    do
                    {
                        temp2 = temp2->next;
                    } while (temp2->next != temp);
                    temp2->next = temp->next;
                    (temp->next)->prev = temp2;
                    free(temp);
                    printf("specific node is delete\n");
                    display();
                }
            }

            break;

        default:
            break;
        }
    }

} // end of method
int main()
{

    int ch;
    do
    {
        printf("1.insert \n");
        printf("2.delete \n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("Enter your choice=\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();

            break;
        case 2:
            delete ();

            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("invalid choice \n");
            break;
        }
    } while (1);

    return 0;
}
