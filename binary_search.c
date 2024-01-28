// apply binary search in normal way with any recusion
#include <stdio.h>
void sort(int a[], int sz)
{

	int temp;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j <= 8 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{

	int a[10], flag = 0, num;
	printf("Enter array elements=\n");
	for (int i = 0; i <= 9; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter element which you want to search=\n");
	scanf("%d", &num);

	sort(a, 10);

	int mid = 10 / 2;
	if (a[mid] == num)
	{
		flag = 2;
	}
	else if (a[mid] > num)
	{
		for (int i = mid + 1; i <= 9; i++)
		{
			flag = 2;
			break;
		}
	}
	else if (a[mid] < num)
	{
		for (int i = 0; i < mid; i++)
		{
			flag = 2;
			break;
		}
	}
	if (flag==2)
	{
	printf("element is present in the array\n");
	}
	else
	{
		printf("such element are not search in the array");
	}

	return 0;
}