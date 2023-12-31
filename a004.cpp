#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b=0;
    while(cin>>a)
    {
    if(a%4==0&&a%100!=0)
    {
        cout<<"閏年"<<endl;
        b=1;
    }
    if(a%400==0)
    {
        cout<<"閏年"<<endl;
        b=1;
    }
    if(b==0)
    {
        cout<<"平年"<<endl;
    }
    b=0;
    }
}