#include <stdio.h>
int getnumber(int n)
{
 
	int num;
	if(n==10)
	{
		return 1;
	}	
	else
	{
		num=(getnumber(n+1)+1)*2;//getnumber(2)=getnumber(1)/2-1;
		printf("第%d天猴子所剩桃子%d个\n",n,num);
	}
	return num;
}
int main()
{
	int num=getnumber(1);
	printf("猴子第一天摘了：%d个桃子\n",num);
	return 0;
}

