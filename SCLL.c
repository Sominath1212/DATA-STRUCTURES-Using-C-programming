/*write a program for singly circular linked list */
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
    printf("\n*****LIST*****\n");
    printf("\n-------------------------\n");
    temp = first;
    do
    {
        printf("|%d|\t", temp->data);
        temp = temp->next;
    } while (temp != first);
    printf("\n-------------------------\n");
}
void insert()
{
    struct node *nn, *temp, *temp2;
    int sele, ch;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->next = NULL;
    printf("Enter data for node =\n");
    scanf("%d", &nn->data);
    if (first == NULL)
    {
        nn->next = nn;
        first = nn;

        printf("list is created ...!\n");
    }
    else
    {
        printf("1.insert at first position\n");
        printf("2.inset at last position\n");
        printf("3.insert at specific posiiton\n");
        printf("enter your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            temp = first;
            do
            {
                temp = temp->next;
            } while (temp->next != first);
            temp->next = nn;
            nn->next = first;
            first = nn;
            printf("node placed at first position\n");
            display();
            break;
        case 2:
            nn->next = first;
            temp = first;
            do
            {
                temp = temp->next;
            } while (temp->next != first);
            temp->next = nn;
            printf("node placed at last position\n");
            display();
            break;
        case 3:

            printf("Enter data node ,which you want add node that=\n");
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
            if (first == NULL)
            {
                printf("node such list present\n");
            }
            else
            {
                if (temp == first && temp->data == sele)
                {
                    // selected node is first node

                    nn->next = first->next;
                    first->next = nn;

                    printf("node placed at specific  position\n");
                    display();
                }
                else if (temp->data == sele && temp->next == first)
                {
                    nn->next = first;
                    temp = first;
                    do
                    {
                        temp = temp->next;
                    } while (temp->next != first);
                    temp->next = nn;
                    printf("node placed at specific  position\n");
                    display();
                }
                else
                {
                    nn->next = temp->next;
                    temp->next = nn;
                    printf("node place at specific position\n");
                    display();
                }

            } // end of else if

            break;

        default:
            printf("invalid choice \n");
            break;
        }
    }

} // end of method insert()
void delete()
{
    struct node *temp, *temp2;
    int ch, sele;
    printf("1.delete at first position\n");
    printf("2.delete at last position\n");
    printf("3.delete at specific position\n");
    printf("Enter your choice =\n ");
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
        printf("delete first node \n");
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
        free(temp);
        printf("node delete at last position\n");
        display();

        break;
    case 3:
        printf("Enter node ,which you want to delete=\n");
        scanf("%d", &sele);
        temp = first;
        do
        {
            if (temp->data == sele)
            {
                break;
            }

            temp = temp->next;
        } while (temp != first);
        if (temp == first)
        {
            printf("no such node found\n");
        }
        else
        {
            if (temp == first && temp->data == sele)
            {
                temp2 = first;
                do
                {
                    temp2 = temp2->next;
                } while (temp2->next != first);
                temp2->next = first->next;
                first = first->next;
                printf("delete specific position node \n");
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
                free(temp);
                printf("node delete at specific  position\n");
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
                free(temp);
                printf("node delete at specific position\n");
                display();
            }
        }

        break;
    default:
        printf("invalid\n");
        break;
    }

} // end of method
int main()
{
    int ch;
    do
    {
        printf("1.insert \n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("Enter your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();

            break;
        case 2:
            delete ();
            break;
        case 4:
            exit(0);

            break;
        case 3:

            break;

        default:
            printf("enter right option\n");

            break;
        }
    } while (1);

    return 0;
}