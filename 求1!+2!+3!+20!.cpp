//求s=1!+2!+3!+...+20! 
#include <stdio.h>
int main()
{
	double s=0,t=1;//通常求阶乘的值比较大，所以定义为双精度类型 
	int i;
	for(i=1;i<=3;i++)//n!=n*(n-1)!求出每个数的阶乘在相加 
	{
		t=t*i;
		s=s+t;
	}printf("%.4f",s);
	



}

