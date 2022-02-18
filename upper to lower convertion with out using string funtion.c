#include<stdio.h>
void main()
{
	int a,i;
	scanf("%d",&a);
	char str[a];
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
}
