#include <stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int l,i;
   scanf("%s",str);
   l=strlen(str);
   for(i=0;i<l;i++)
   {
       if(str[i]>=65&&str[i]<=90)
       {
           str[i]=str[i]+32;
       }
       else if(str[i]>=97&&str[i]<=122)
       {
           str[i]=str[i]-32;
       }
   }
   printf("%s",str);
	return 0;
}
