#include <stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
	int b[3][3];
	printf("array a:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%4d",a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("array b:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}


}

