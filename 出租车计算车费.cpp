#include <stdio.h>
float fn(int x,int y)//·�� x ʱ�� y
{
	float a=2.3;//����
	int b=13;//�𲽼�
	int c=1;//�ͷ�
	double money;//����
	if(y>=23||y<5)
		if(y<=3) money=a+c;
		else money=13+(x-3)*2.3*1.2+1;
	else money=13+(x-3)*2.3+1;
	return money;
}
main()
{
	float sum=fn(12,9)+fn(12,18);
	printf("����ܹ�����:%.2fԪ\n",sum);
}
