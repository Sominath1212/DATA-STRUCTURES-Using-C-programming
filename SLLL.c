/*write a programo for singly linear linked list*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *first = NULL;
void display();
void insert()
{

    struct node *nn, *temp, *temp2;
    int ch, sel_ele;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->next = NULL;
    printf("Enter element for node=\n ");
    scanf("%d", &nn->data);
    if (first == NULL)
    {
        first = nn;
        printf("list is created \n");
    }
    else
    {
        printf("1.insert at first position\n");
        printf("2.insert at last postion\n");
        printf("3.insert at specific position\n");
        printf("enter your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            nn->next = first;
            first = nn;
            printf("node insert at first position\n");
            display();
            break;
        case 2:
            temp = first;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = nn;
            printf("node place at last position\n");
            display();
            break;
        case 3:
            printf("Enter node after which you want to add node=\n");
            scanf("%d", &sel_ele);
            temp = first;
            do
            {
                if (temp->data == sel_ele)
                {
                    break;
                }
                temp = temp->next;

            } while (temp != NULL);
            if (temp == NULL)
            {
                printf("no such node found\n");
            }
            else
            {

                nn->next = temp->next;
                temp->next = nn;
                printf("node place at specific position\n");
                display();
            }
            printf("node place at specific position\n");
        }
    }

} // end of function insert
void delete()
{
    struct node *temp, *temp2;
    int sel_ele, ch;

    if (first == NULL)
    {
        printf("no such node present\n");
    }
    else
    {
        printf("1.delete at first position \n");
        printf("2.delete at last positon\n");
        printf("3.delete at specific position\n");
        printf("enter your choice=\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            // delete first nodde
            first = first->next;
            printf(" node delete at first position\n");
            display();
            break;
        case 2: // delete last node
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
            printf(" node delete at last position\n");
            display();
            break;
        case 3:
            printf("which node you want to delete=\n");
            scanf("%d", &sel_ele);
            temp = first;
            do
            {
                if (temp->data == sel_ele)
                {
                    break;
                }

                temp = temp->next;
            } while (temp != NULL);
            if (temp == NULL)
            {
                printf("no such noe found \n");
            }
            else
            {
                if (temp == first && temp->data == sel_ele)
                {
                    first = first->next;
                    printf("node delete at specific position\n");
                }
                else if (temp->next == NULL && temp->data == sel_ele)
                {
                    temp2 = first;
                    while (temp2->next != temp)
                    {
                        temp2 = temp2->next;
                    }
                    temp2->next = temp->next;

                    printf("node delete at specific position\n");
                }

                else
                {

                    temp2 = first;
                    while (temp2->next != temp)
                    {
                        temp2 = temp2->next;
                    }
                    temp2->next = temp->next;
                    printf("node delete at specific position\n");
                    display();
                }
            }
        }
    }

} // end function delete
void display()
{

    struct node *temp;
    temp = first;
    printf("\n--------------------------------\n");
    printf("\n**********LIST********\n");
    while (temp != NULL)
    {
        printf("|%d|\t", temp->data);
        temp = temp->next;
    }
    printf("\n--------------------------------\n");
} // end display method
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
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter valid choice \n");
            break;
        }
    } while (1);

    return 0;
}