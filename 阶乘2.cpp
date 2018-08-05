#include <stdio.h>
int main()
{
	int i=1,sum=1,n;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum*=i;
		i++;
	}printf("%d",sum);



}

