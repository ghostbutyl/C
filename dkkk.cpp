#include <stdio.h>
func(int x)
{
	int p;
	if(x==0||x==1) return(3);
	p=x-func(x-2);
	return p;
}
int main()
{	
	printf("%d\n",func(9));
}

