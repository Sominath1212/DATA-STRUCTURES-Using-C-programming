#include<stdio.h>
int main()
{

int a[10],num,flag=1;
printf("Enter  elements of array =\n");
for (int i = 0; i <=9; ++i)
{
	scanf("%d",&a[i]);
}

printf("Enter element which your want to search=\n");
scanf("%d",&num);

for (int i = 0; i <=9; ++i)
{
	if (a[i]==num)
	{
		flag=2;
		break;
	}
}
if (flag==2)
{
	printf("%d is present in the array\n",num);
}
else
{

printf(" %d is not a present in the array\n",num);
}
	return 0;

}