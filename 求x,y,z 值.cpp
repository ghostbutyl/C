#include <stdio.h>
int main()
{
	int x,y,z;
	for(x=1;x<=5;x++) 
	{
		for(y=0;y<=9;y++)
		{
			for(z=0;z<=9;z++)
			{
				if((x*100+y*10+z*1)+(y*100+z*10+z*1)==532)
				{
					printf("%d,%d,%d\n",x,y,z);
				}
			}
		}
	}

	

}

