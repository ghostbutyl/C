#include <stdio.h>
int main()
{
	int i=1,sum=0,j=2,k=1;
	
	do//1+3+5+7+...99
	{
		sum=sum+i;
		i=i+2;
		while(j<=10)
		{
			k=k*j;
			j+=2;			
		 } 
		
	}while(i<=10);
	printf("sum=%d",sum+k);



}
