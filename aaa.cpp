#include <stdio.h>
void replacemax(int arr[],int value)
{
	int max=arr[0];
	int index=0;
	int i;
	for(i=1;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];//�������нϴ������ֵ��max 
			index=i;//��¼��ǰ����
			 
		}
	}
	arr[index]=value;
}
int main()
{
	int arr1[]={10,41,3,12,22};
	int arr2[]={1,2,3,4,5};
	int i;
	replacemax(arr1,arr2[0]);
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr1[i]);
		
	}
}
