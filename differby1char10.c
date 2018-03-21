#include <stdio.h>
#include<string.h>
int main() 
{	
char str1[10],str2[10];	
int i,j,n,n1,cnt=0;	
scanf("%s %s",str1,str2);	
n=strlen(str1);	
n1=strlen(str2);	
if(n==n1)	
{   
for(i=0,j=0;i<n,j<n1;i++,j++)   
{    	    
if(str1[i]==str2[j])    	   
{    	       
continue;    	  
}    	   
else    	  
{
cnt++;    	  
}   
}  	
if(cnt==1)  
{    	    
printf("yes..differ by 1 character");    
}}	
else	
{
printf("\n no");
}
return 0;
}
