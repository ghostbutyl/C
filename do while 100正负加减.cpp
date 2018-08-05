#include <stdio.h>
int main()
{

	int i=1,sum=0,flag=1;
	do
	{
		i++;
		sum+=i*flag;
		flag*=-1;
		
	}while(i<=100);
	printf("%d",sum);
	return 0;
	


}

