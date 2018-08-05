#include <stdio.h>
#include <string.h>
int main()
{
	
	char d[35];
	char blank[]=" ",c[]="C++",v[]="Visual";
	
	strcpy(d,v);
	strcat(d,blank);
	strcat(d,c);
	strlen(d);
	printf("%s \nlen=%d\n",d,strlen(d));



}

