#include <stdio.h>
#include <stdlib.h>
int main()
{

    int stack[5], i;
    int ele, ch, top = -1;
    do
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter your choice=\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter data for stack=\n");
            scanf("%d", &ele);
            stack[top + 1] = ele;
            top++;
            printf("element are pushed..!\n");
            break;
        case 2:
            printf("%d is popped element..!\n");
            top--;
            break;
        case 3:
            printf("\n-----------------------------------\n");
            printf("\n********STACK***********\n");
            for (int i = top; i >= 0; i--)
            {
                printf("|%d|\n", stack[i]);
            }

            break;
        default:
            printf("invalid choice\n");
            break;
        }
    } while (1);

    return 0;
}