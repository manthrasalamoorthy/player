#include <stdio.h>
int main() 
{
	int n,sum=0,squ,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		squ=rem*rem;
		sum=sum+squ;
		n=n/10;
	}
	printf("\n%d",sum);
	return 0;
}
