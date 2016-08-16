#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    if(n==1||n==2)
        cout<<"-1";
    else if(n%2!=0)
        cout<<2;
    else if(n%4==0)
        cout<<3;
    else if(n%4==2)
        cout<<4;

    return 0;
}
