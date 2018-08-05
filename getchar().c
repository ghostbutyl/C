#include "stdio.h" 
void main()
{
	char c1,c2;
	c1=getchar();
	putchar(c1);putchar('\n');
	printf("%c,%d\n",c1,c1);
	c2=c1+32;
	printf("%c,%d\n",c2,c2);
	
	return 2;
}
