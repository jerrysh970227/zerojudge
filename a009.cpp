#include <iostream>

using namespace std;

int main()
{
    char c;
    while((c=getchar()) != '\n'){
        int i = c - 7;
        c = i;
        cout<< c;
    }
}
