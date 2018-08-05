#include <stdio.h>
int main()
{
	int i=1,sum=0;
	tt:if(i<=5)
	{
		sum+=i;
		i++;
		goto tt;
	}
	printf("sum=%d\n",sum);



}

