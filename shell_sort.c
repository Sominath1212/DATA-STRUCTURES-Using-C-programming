/*write a program for shell sort */

#include <stdio.h>
int main()
{

    int a[10], i, j, temp;
    printf("Enter array element=\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int gap = 10 / 2; gap >= 1; gap--)
    {

        for (i = 0; i <= 9 - gap; i++)
        {
            if (a[i] > a[gap + i])
            {
                temp = a[i];
                a[i] = a[gap + i];
                a[gap + i] = temp;
            }
        }
    }
    for (i = 0; i <= 9; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}