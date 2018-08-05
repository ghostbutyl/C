#include <stdio.h>
int main()
{
	int i=1,n,sum=1;
	printf("输入一个整数：\n");
	scanf("%d",&n);
	do
	{
		sum*=i;
		i++;
	}while(i<=n);
	printf("%d",sum);



}

