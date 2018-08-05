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
	printf("小明第10天记了%d个单词\n",n);
	return 0; 
}
