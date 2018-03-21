#include <stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int l,t,i,j;
	scanf("%s",arr);
	l=strlen(arr);
	for(i=l-1,j=0;i>l/2,j<l/2;i--,j++)
	{
	    t=arr[i];
	    arr[i]=arr[j];
	    arr[j]=t;
	}
	printf("%s",arr);
	return 0;
}
