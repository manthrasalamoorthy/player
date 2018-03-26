#include<iostream>
using namespace std;
int main()
{
    char str[30];
    int i,n;
    cout<<"enter n value:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(i=0;i<n;i++)
    {
        str[i]=str[i]+3;
        cout<<str[i];
    }return 0;
}
