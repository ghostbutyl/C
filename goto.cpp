#include <stdio.h>
int main()
{
	int i=6,sum=1;
	loop:if(i>=1)
	{
		sum*=i;
		i--;
		goto loop;
	}printf("%d",sum);



}

