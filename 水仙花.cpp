#include <stdio.h>
int main()
{
	int b,s,g,i;//b为百位，s为十位，g为个位， 
	for(i=0;i<1000000;i++)
	{
		b=i/100;
		s=(i%100)/10;
		g=i%10;
		if(i==b*b*b+s*s*s+g*g*g)
		{
				printf("%d\n",i);
		}
	}



}

