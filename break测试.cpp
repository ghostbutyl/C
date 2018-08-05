#include <stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("运球%d次\n",i); 
		if(i==5)
		{
			printf("肚子疼\n");
			printf("停止\n");break;
		}
	}printf("今天训练结束");
	


}

