#include <stdio.h>
int kii(int n)
{
	if(n==1)
	{
		return 1;
	}
	else{
		return kii(n-1)+n;
	}
	
}
int main()
{
	int n;
	n=kii(10);
	printf("С����10�����%d������\n",n);
	return 0; 
}
