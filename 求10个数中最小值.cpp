#include <stdio.h>
int main()
{
	float x,sum=0;//sum为累加器，存放数据总和 
	int i=0;//i为计数器 ，记录数据输入个数 
	printf("输入10个数：");//输入个数以负数结束 
	scanf("%f",&x);
	while(x>=0)
	{
		sum=sum+x;
		i++;
		scanf("%f",&x);
	}
	printf("i=%d,sum=%f,avg=%.2f",i,sum,sum/i);



}

