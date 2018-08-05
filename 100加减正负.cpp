#include <stdio.h>
int main()
{
	int i,j=1,sum=0;//j为分子，i为分母 
	for(i=1;i<=100;i++)
	{
		sum=sum+j/i;
		j=-1*j;
	}printf("%d",i);



}

