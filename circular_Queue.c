#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch;
    do
    {
        int queue[10], i, f = 0, r = -1, ele;
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.exit\n");
        printf("Enter your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (f == (r + 1) % 10 && r > -1)
            {
                printf("circular queue is over flow\n");
            }
            else
            {
                printf("Enter data for node =\n");
                scanf("%d", &ele);
                r = (r + 1) % 10;
                queue[r] = ele;
                printf("element are Enqueued\n");
            }

            break;
        case 2:

            if (f == 0 && r == -1)
            {
                printf("circular queue is underflow\n");
            }
            else
            {
                printf("%d is dequeued\n");
                f = (f + 1) % 10;
                if (f == (r + 1) % 10)
                {
                    r = -1;
                    f = 0;
                }
            }

            break;
        case 3:

            if (f == 0 && r == -1)
            {
                printf("circular queue is empty\n");
            }
            else
            {
                i = f;
                do
                {
                    printf("%d\t", queue[i]);
                    i = (i + 1) % 10;
                } while (i != (r + 1) % 10);
            }

            break;
        case 4:
            exit(0);
            break;

        default:
            printf("invalid input\n");
            break;
        }
    } while (1);

    return 0;
}
