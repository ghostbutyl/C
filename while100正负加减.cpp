#include <stdio.h>
int main()
{
	int sum,i,flag;
	i=1;
	flag=1;
	sum=0;
	while(i<=100)
	{
		i++;
		sum += flag*i;
		flag*=-1;
	}
	printf("%d\n",sum);
	return 0;


}

