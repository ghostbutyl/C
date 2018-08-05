#include <stdio.h>
void fn() 
{
	 static  int x=1;
	x*=2;
	printf("%d\n",x);
	
}
main()
{
	int i;
	for(i=0;i<5;i++)	
	{
		fn();
	}
	extern int x;
	printf("%d",x);
} 
int x=100;
