#include <stdio.h>
int main()
{
	int a[]={3,5,2,6,1,4,7,8,9,0},i,j,max;
/*	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	*/

	for(i=0;i<10;i++)
	{
		if(i !=9)
			printf("%3d",a[i]);
		else
			printf("%3d\n",a[i]);
	}

	for(i=8;i>=0;i--)//控制每趟比较的最大下标 
	{
		for(j=0;j<=i;j++)
		{
			if(a[j]>a[j+1]) 
			{
			
				max=a[j];
				a[j]=a[j+1];
				a[j+1]=max;
			}
		}
	}

	for(i=0;i<10;i++)
	{
		if(i !=9)
			printf("%2d",a[i]);
		else
			printf("%2d",a[i]);
	}
	return 0;
}

