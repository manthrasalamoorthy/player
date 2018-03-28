#include <stdio.h>

int main() 
{
	int l,r,sl,i;
	scanf("%d %d",&l,&r);
	if(l>r)
	{
		sl=l;
	}
	else
	{
		sl=r;
	}
	for(i=2;i<=sl;i++)
	{
		if((i%l==0) && (i%r==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
