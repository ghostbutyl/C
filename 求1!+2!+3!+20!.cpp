//��s=1!+2!+3!+...+20! 
#include <stdio.h>
int main()
{
	double s=0,t=1;//ͨ����׳˵�ֵ�Ƚϴ����Զ���Ϊ˫�������� 
	int i;
	for(i=1;i<=3;i++)//n!=n*(n-1)!���ÿ�����Ľ׳������ 
	{
		t=t*i;
		s=s+t;
	}printf("%.4f",s);
	



}

