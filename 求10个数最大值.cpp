#include <stdio.h>
int main()
{
	int i;
	int x,max;//max存放最大值 
	printf("输入10个数：");
	scanf("%d",&x);//读入第一个数 
	max=x;//将第一个数设置为最大值 
	for(i=1;i<10;i++)//依次读入的数据比最大值，则将它作为最大值 
	{
		scanf("%d",&x);
		if(max<x) max=x;//如果读入的数据比最大值大,则将它作为最大值 
	}
	printf("%d",max);



}

