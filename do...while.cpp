#include <stdio.h>
int main()
{
	int number=200,year=2014;
	do
	{
	year++;
	number*=1.2;
	}while(number<1000);
	printf("��%d���������ģͻ��1000��\n",year);
	
}
