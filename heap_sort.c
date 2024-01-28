/*write a program for a heap sort algorithm*/
#include <stdio.h>
int main()
{
    int a[10], i, sel_id, sm, temp, j,sm_id;
    printf("Enter array elements=\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    for (sel_id = 0; sel_id <= 8; sel_id++)
    {
        sm= a[sel_id];
        sm_id= sel_id;
        for (j = sel_id + 1; j <= 9; j++)
        {
            if (a[j] < sm)
            {
                sm= a[j];
                sm_id= j;
            }
        }
        temp = a[sel_id];
        a[sel_id] = a[sm_id];
        a[sm_id] = temp;
    }

    for (i = 0; i <= 9; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}