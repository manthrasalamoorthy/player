#include <stdio.h>
#include<string.h>
int main() 
{
	char string[30];
	int i,l;
	scanf("%s",string);
	l=strlen(string);
	for(i=0;i<l;i++)
	{
		if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')
		{
			string[i]='+';
		}
	}
	for(i=l;i>=0;i--)
	{
		if(string[i]!='+')
		{
			printf("%c",string[i]);
		}
	}
 
	return 0;
}
