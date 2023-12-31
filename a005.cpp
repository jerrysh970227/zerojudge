#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    int num[n][5];
    
    for (int i=0; i<n; i++)
        for (int j=0; j<4; j++)
          cin>>num[i][j];
    
    for (int i=0; i<n; i++){
        int diff1 = num[i][3] - num[i][2];
        int diff2 = num[i][2] - num[i][1];
      
        if (diff1 == diff2) num[i][4] = num[i][3] + diff1;
        else num[i][4] = num[i][3] * (diff1/diff2);
        
        for (int j=0; j<5; j++)
          cout<<num[i][j] << ' ';
        cout<< endl;
    }
}