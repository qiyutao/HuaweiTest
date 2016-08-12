#include <iostream>

using namespace std;

int main() {
    char a[1000];
    int len;
    cin>>a>>len;

    for(int i=0;i<len;i++) {
        char ch[3];
        if(a[i]<0) {
            if(len>i+1) {
                ch[0] = a[i];
                i++;
                ch[1] = a[i];
                ch[2] = '\0';
                cout<<ch;
            }
        } else {
            cout<<a[i];
        }
    }
    return 0;
}
