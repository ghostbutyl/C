#include <stdio.h>
int getnumber(int n)
{
 
	int num;
	if(n==10)
	{
		return 1;
	}	
	else
	{
		num=(getnumber(n+1)+1)*2;//getnumber(2)=getnumber(1)/2-1;
		printf("��%d�������ʣ����%d��\n",n,num);
	}
	return num;
}
int main()
{
	int num=getnumber(1);
	printf("���ӵ�һ��ժ�ˣ�%d������\n",num);
	return 0;
}

