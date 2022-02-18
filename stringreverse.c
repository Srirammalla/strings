#include<stdio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
scanf("%[^\n]s",str1);
int i,j,len=0;
for(i=0;str1[i]!='\0';i++)
{
	len++;
}
for(i=len-1,j=0;i>=0;i--,j++)
{
	
	str2[j]=str1[i];
}
printf("%s",str2);
}

