//find mejority element in the array
#include <stdio.h>
int main()
{
    int a[3] ;
printf("Enter elements=\n");
for (int i = 0; i <=2; i++)
{
    scanf("%d",&a[i]);
}

    int count = 0;
    int largestEle, largest = 0;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = i + 1; j <= 2; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (largest < count)
        {
            largest=count;
            largestEle = a[i];
        }

    }
    printf("mejority element %d",largestEle);

    return 0;
}