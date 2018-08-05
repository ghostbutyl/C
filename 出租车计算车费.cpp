#include <stdio.h>
float fn(int x,int y)//路程 x 时间 y
{
	float a=2.3;//单价
	int b=13;//起步价
	int c=1;//油费
	double money;//花费
	if(y>=23||y<5)
		if(y<=3) money=a+c;
		else money=13+(x-3)*2.3*1.2+1;
	else money=13+(x-3)*2.3+1;
	return money;
}
main()
{
	float sum=fn(12,9)+fn(12,18);
	printf("打的总共花费:%.2f元\n",sum);
}
