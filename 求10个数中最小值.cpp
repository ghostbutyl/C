#include <stdio.h>
int main()
{
	float x,sum=0;//sumΪ�ۼ�������������ܺ� 
	int i=0;//iΪ������ ����¼����������� 
	printf("����10������");//��������Ը������� 
	scanf("%f",&x);
	while(x>=0)
	{
		sum=sum+x;
		i++;
		scanf("%f",&x);
	}
	printf("i=%d,sum=%f,avg=%.2f",i,sum,sum/i);



}

