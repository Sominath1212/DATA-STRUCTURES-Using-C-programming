
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int q[10], i, ch, ele, rear = -1, front = 0;
    do
    {
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("Enter your choice=\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter data for  queue=\n");
            scanf("%d", &ele);
            q[rear + 1] = ele;
            rear++;
            printf("element are sucessfully enqueued\n");
            break;
        case 2:
            printf("%d is successfully dequeued\n", q[front]);
            front++;

            break;
        case 3:
            printf("\n-------------------------\n");
            printf("\n*********QUEUE**********\n");
            for (int i = front; i <= rear; i++)
            {
                printf("|%d|\t", q[i]);
            }
            printf("\n---------------------------\n");
        default:
            printf("invalid choice\n");
            break;
        }
    } while (1);

    return 0;
}