#include <stdio.h>
int main()
{
	static int a[]={1,2,3,4,5,6};
	int i;
	int *pa;
	pa=a;//pa=&a[0];
	for(i=0;i<6;i++)
	{
		//printf("%3d",*(pa+i));
		printf("%3d",*pa++);
		//printf("%3d",*(a+i));
	}

}

