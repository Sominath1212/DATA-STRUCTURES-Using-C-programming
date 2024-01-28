// write progrsm for concept of two stack

#include <stdio.h>
#include <stdlib.h>
int a[10], ptop = 4, stop = 5;
void primary_display()
{
    if (ptop == 4)
    {
        printf("primary stack is empty\n");
    }

    else
    {
        printf("\n-------------------------\n");
        printf("\nprimary stack\n");
        for (int i = ptop; i > 4; i--)
        {
            printf("|%d|\n", a[i]);
        }
    }
}
void secondary_display()
{
    if (stop == 5)
    {
        printf("secondary stack is empty\n");
    }
    else
    {
        printf("\n-------------------------\n");
        printf("\nsecondary  stack\n");
        for (int i = 4; i >= stop; i--)
        {
            printf("|%d|\n", a[i]);
        }
    }
}
void push()
{
    int ele;
    printf("Enter data=\n");
    scanf("%d", &ele);
    if (ptop == 9)
    {
        printf("primary stack is over flow \n");
    }
    else
    {
        a[ptop + 1] = ele;
        ptop++;
        printf("%d is push in to the stack\n", ele);
        primary_display();
    }
}

void pop()
{
    int ch;
    printf("1.pop from primary stack\n");
    printf("2.pop from secodary stack\n");
    printf("Enter your choice =\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        // pop from primary stack
        if (ptop == 4)
        {
            printf("primary stack is underflow\n");
        }
        else
        {
            a[stop - 1] = a[ptop];
            ptop--;
            stop--;
            printf("%d is popped from primary stack and push from secondary stack\n", a[ptop]);
            primary_display();
            secondary_display();
        }
        break;
    case 2:
        // here have  two options
        // discard element
        // restore elementif
        if (stop == 5)
        {
            printf("secondary stack is underflow\n");
        }
        else
        {
            printf("1.discard\n");
            printf("2.restored element\n");
            printf("enter your choice=\n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:

                printf("%d is popped from secondary stack\n ", a[stop]);
                stop++;
                secondary_display();
                break;
            case 2:
                a[ptop + 1] = a[stop];
                stop++;
                ptop++;
                printf("%d is popped from secondary stack and push it into primary stack\n", a[stop]);
                primary_display();
                secondary_display();
                break;

            default:
                printf("invalid choice \n");

                break;
            }

            break;
        }
    default:
        printf("invalid choice \n");
        break;
    }
}

int main()
{
    int ch;
    do
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("Enter your choice=\n");
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
            primary_display();
            secondary_display();
            break;
        case 4:
            exit(0);

            break;

        default:
            printf("invalid choice\n");
            break;
        }

    } while (1);

    return 0;
}