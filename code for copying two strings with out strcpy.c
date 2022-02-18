#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	scanf("%[^\n]s",str1);
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("%s",str2);
}
