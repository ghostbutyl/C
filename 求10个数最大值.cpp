#include <stdio.h>
int main()
{
	int i;
	int x,max;//max������ֵ 
	printf("����10������");
	scanf("%d",&x);//�����һ���� 
	max=x;//����һ��������Ϊ���ֵ 
	for(i=1;i<10;i++)//���ζ�������ݱ����ֵ��������Ϊ���ֵ 
	{
		scanf("%d",&x);
		if(max<x) max=x;//�����������ݱ����ֵ��,������Ϊ���ֵ 
	}
	printf("%d",max);



}

