#include <stdio.h>
int main() 
{
    int n,i,cnt=0,j,y;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	 if(n%i==0)
	 {
	     y=i;
	     cnt=0;
	     for(j=1;j<=y;j++)
	     {
	         if(y%j==0)
	         {
	             cnt++;
	         }
	     }
	     if(cnt==2)
	     {
	         printf("%d ",i);
	     }
	 }
	}
	return 0;
}
