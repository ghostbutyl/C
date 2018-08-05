#include <stdio.h>
int main()
{
	int num,ad,bd,cd;
	for(num=100;num<1000;num++)
	{
		cd=num/100;
	    bd=(num%100)/10;
	    ad=num%10;
	    if(num==cd*cd*cd + bd*bd*bd + ad*ad*ad)
		{
		printf("%d\n",num);
		}
	}
}
