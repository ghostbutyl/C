#include <stdio.h>
int main()
{
	int cocks=1,hens=1,chicks;//cocksΪ������hensΪĸ����chicksС�� 
	printf("%8s%8s%8s\n","����","ĸ��","С��");
	while(hens<=20)
	{
		
		while(hens<=33)
		{
			chicks=100-cocks-hens;
			if(chicks%3==0)
				if((cocks*5+hens*3+chicks/3)==100)
					printf("%8d%8d%8d\n",cocks,hens,chicks);
				hens++;
		}
		hens=1;
		cocks++;		
	}
}

