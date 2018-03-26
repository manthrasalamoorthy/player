#include<iostream>
using namespace std;
int main()
{
    char s[30];
    int i,n;
    cout<<"enter n value:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        s[i]=s[i]+3;
        cout<<s[i];
    }return 0;
}
