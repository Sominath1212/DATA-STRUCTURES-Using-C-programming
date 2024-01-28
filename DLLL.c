/*write a program for a doubly linear linked list*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next;
    struct node *prev;
    int data;
};
struct node *first = NULL;
void diplay()
{
    printf("\n---------------------\n");
    printf("\n*****list******\n");
    struct node *temp = first;
    while (temp != NULL)
    {
        printf("|%d|\t", temp->data);
        temp = temp->next;
    }
    printf("\n---------------------\n");
} // end of method
void insert()
{
    struct node *nn, *temp, *temp2;
    int ch, sele;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->next = NULL;
    nn->prev = NULL;
    printf("enter data for node =\n");
    scanf("%d", &nn->data);
    if (first == NULL)
    {
        first = nn;
        printf("list is created..\n");
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
            nn->next = first;
            nn->prev = NULL;
            first->prev = nn;
            first = nn;
            printf("node placed at first position\n");
            diplay();
            break;
        case 2:
            temp = first;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            nn->prev = temp;
            temp->next = nn;
            printf("node placed at last position\n");
            diplay();
            break;
        case 3:
            printf("enter node which your after add new node that=\n");
            scanf("%d", &sele);
            temp = first;
            do
            {
                if (temp->data == sele)
                {
                    break;
                }

                temp = temp->next;
            } while (temp->next != NULL);

            if (temp->next == NULL)
            {
                printf("no such node found \n");
            }
            else
            {
                // means node found
                if (temp->data == sele && temp == first)
                {
                    nn->next = first;
                    nn->prev = NULL;
                    first->prev = nn;
                    first = nn;
                    printf("node place at specific position\n");
                    diplay();
                }
                else if (temp->data == sele && temp->next == NULL)
                {
                    nn->prev = temp;
                    temp->next = nn;
                    printf("node place at specific position\n");
                    diplay();
                }
                else
                {
                    nn->next = temp->next;
                    nn->prev = temp;
                    temp->next = nn;
                    printf("node place at specific position\n");
                    diplay();
                }
            }
        }
    }

} // end of method
void delete()
{

    struct node *temp2, *temp;
    int ch, sele;
    if (first == NULL)
    {
        printf("no such list present\n");
    }
    else
    {
        printf("1.delete at first position\n");
        printf("2.delete at last position\n");
        printf("3.delete at specific position\n");
        printf("Enter your choice=\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            // here delete first position
            (first->next)->prev = NULL;
            first = first->next;
            printf("first position are deleted \n");
            diplay();
            break;
        case 2:
            temp = first;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp2 = first;
            while (temp2->next != temp)
            {
                temp2 = temp2->next;
            }
            temp2->next = NULL;
            free(temp);
            printf("last node is deleted \n");
            diplay();
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
            } while (temp->next != NULL);
            if (first == NULL)
            {
                printf("no such list present \n");
            }
            else
            {
                if (temp->data == sele && temp == first)
                {
                    (first->next)->prev = NULL;
                    first = first->next;
                    printf("node delete at specific position\n");
                    diplay();
                }
                else if (temp->next == NULL && temp->data == sele)
                {
                    temp2 = first;
                    while (temp2->next != temp)
                    {
                        temp2 = temp2->next;
                    }
                    temp2->next = NULL;
                    free(temp);
                    printf("node delete at specific position\n");
                    diplay();
                }
                else
                {
                    temp2 = first;
                    while (temp2->next != temp)
                    {
                        temp2 = temp2->next;
                    }

                    (temp->next)->prev = temp2;
                    temp2->next = temp->next;
                    free(temp);
                    printf("node delete at specific position\n");
                    diplay();
                }
            }
        }
    }

} // end of method
int main()
{
    int ch;

    do
    {
        printf("1.insert\n");
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
        case 3:
            diplay();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("invalied choice \n");
            break;
        }

    } while (1);

    return 0;
}