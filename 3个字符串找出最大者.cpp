#include <stdio.h>
#include <string.h>
int main()
{
	char string[20],str[3][20];
	int i,len;
	printf("input number:\n");
	for(i=0;i<3;i++)
	{
		gets(str[i]);
		if(strcmp(str[0],str[1])>0)
			{
				strcpy(string,str[0]);
				len=strlen(string);
			}
			
		else
		{
			strcpy(string,str[1]);
			len=strlen(string);
		}
		if(strcmp(str[2],string)>0)
			{
				strcpy(string,str[2]);
				len=strlen(string);
			}
		
	}printf("The largest string is:%s\nlen=%d\n",string,len);



}

