#include <stdio.h>
int main()
{
	int number=200,year=2014;
	do
	{
	year++;
	number*=1.2;
	}while(number<1000);
	printf("到%d年后人数规模突破1000人\n",year);
	
}
