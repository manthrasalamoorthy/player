#include <stdio.h>
 int main() 
{
	char string[50];
	scanf("%s",string);
	if(string[0]=='S' || string[0]=='s')
	{
		printf("\nyes ,it is holiday");
	}
	else
	{
		printf("\nno ,it is not a  holiday");
	}
	return 0;
}
