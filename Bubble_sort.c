// /*sort array in asdending order appling bubble sort algorithm*/
// #include <stdio.h>
// int main()
// {
//     int a[10], i, j, temp;
//     printf("Enter array element =\n");
//     for (i = 0; i <= 9; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     // sorting algorithm
//     for (i = 0; i <= 8; i++)
//     {
//         for (j = 0; j <= 8 - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }

//     // print new sorted array
//     for (i = 0; i <= 9; i++)
//     {
//         printf("%d\t", a[i]);
//     }

//     return 0;
// }
/* sort array in desending order appling bubble sort algorithms*/
#include<stdio.h>
int main()
{
    int a[10], i, j, temp;
        printf("Enter array element =\n");
        for (i = 0; i <= 9; i++)
        {
            scanf("%d", &a[i]);
        }
        // sorting algorithm
        for (i = 0; i <= 8; i++)
        {
            for (j = 0; j <= 8 - i; j++)
            {
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        // print new sorted array
        for (i = 0; i <= 9; i++)
        {
            printf("%d\t", a[i]);
        }

    return 0;
}