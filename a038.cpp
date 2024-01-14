#include <iostream>
using namespace std;
int main()
{
    long long a;
    
    cin>>a;
    if(a==0)cout<<0;
    
    while(a%10==0){
        if(a==0)break;
    a/=10;
        
    }
    
    while(a>0){
        
        cout<<a%10;
        a/=10;
    }
    
}  
