#include <stdio.h>
int main()
{
	int i,x,max;
	printf("�������һ����:\n");
	scanf("%d",&x);
	max=x;
	for(i=1;i<10;i++)
	{
		printf("����һ����:\n");
		scanf("%d",&x);
		if(max<x)
			max=x;
			
	}printf("max=%d",max);
	



}

