#include <stdio.h>
int m=13;
int fun2(int x,int y)
{
	int m=3;
	return(x*y-m);
}
int main()
{
	int a=7,b=5;
	printf("%d\n",fun2(a,b)/m);



}

