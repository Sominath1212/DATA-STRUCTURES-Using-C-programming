/*write a program for insertion sort algorithm*/

#include <stdio.h>
int main()
{
    int a[10], i, j, sel;
    printf("Enter array elements=\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        sel = a[i];
        for (j = i - 1; j >= 0 && a[j] > sel; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = sel;
    }
    for (i = 0; i <= 9; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}