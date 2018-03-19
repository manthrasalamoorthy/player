#include<stdio.h>
int main()
{
int number,reminder,reverse=0,n;
printf("Enter the number:");
scanf("%d",&number);
n=number;
while(number!=0)
{
	reminder=number%10;
	reverse=(reverse*10)+reminder;
	number=number/10;
	
}
printf("the reverse of the number %d is %d",n,reverse);
return 0;
}
