#include "stdio.h"
int fac(int n)
{
	int k;
	if(n<0) printf("n<0 data error");
	else if(n==0||n==1) k=1;
	else k=fac(n-1)*n;
	return (k);
}
int main()
{
	int n;
	int j;
	scanf("%d",&n);
	j=fac(n);
	printf("%d!=%d",n,j);
}
