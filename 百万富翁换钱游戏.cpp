#include <stdio.h>
int main()
{
	int i,fu=100000; 
	float mo=0.01,t=0.01;
	for(i=2;i<=30;i++)
	{
		t*=2;
		mo+=t;
		fu+=100000;
		
		
	}printf("���̵õ���%dԪ\n",fu);
	printf("İ���˵õ���%.2fԪ\n",mo);
	



}

