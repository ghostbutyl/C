#include <stdio.h>
int main()
{
	int i,x,max;
	printf("请输入第一个数:\n");
	scanf("%d",&x);
	max=x;
	for(i=1;i<10;i++)
	{
		printf("请下一个数:\n");
		scanf("%d",&x);
		if(max<x)
			max=x;
			
	}printf("max=%d",max);
	



}

