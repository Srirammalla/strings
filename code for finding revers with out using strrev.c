#include<stdio.h>
#include<string.h>
void main()
{
char str1[100];
scanf("%[^\n]s",str1);
int i,j,t,len=0;
for(i=0;str1[i]!='\0';i++)
{
	len++;
}
i=0;
j=len-1;
for(i=0,j=len-1;i<j;i++,j--)
{
	t=str1[j];
	str1[j]=str1[i];
	str1[i]=t;
}
printf("%s",str1);
}

