#include <stdio.h>
#define n 5
int main()
{
	int a[n]={9,6,5,4,1},i,temp;
	printf("roiginal array:\n");
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("\n");
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}printf("lat array:\n");
	for(i=0;i<n;i++)
		printf("%4d",a[i]);


}

