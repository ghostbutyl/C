#include <stdio.h>
int hello();
int main()
{
	int i=1,sum=0;
	for(i=1;i<=10;i++)
	{
		sum+=i;
		if(i==5)
		printf("nihao\n");
		
	}
	printf("%d",sum);
	
	
}


int hello()
{
	int i=1,j=1,k=0;
	 while(i<9)
	{
		i++;
		j=j*i;
		k+=j;
		
	}
	printf("%d",j);
}
