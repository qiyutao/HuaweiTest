#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char passwd[80];
    cin>>passwd;


    for(int i=0;i<strlen(passwd);i++) {
        if(passwd[i]>='A'&&passwd[i]<='Z') {
            if(passwd[i]=='Z') {
                passwd[i] = 'a';
            } else {
                passwd[i] +=  33;
            }
        } else {
            if(passwd[i]>='a'&&passwd[i]<='c') {
                passwd[i] = '2';
            } else if(passwd[i]>='d'&&passwd[i]<='f') {
                passwd[i] = '3';
            } else if(passwd[i]>='g'&&passwd[i]<='i') {
                passwd[i] = '4';
            } else if(passwd[i]>='j'&&passwd[i]<='l') {
                passwd[i] = '5';
            } else if(passwd[i]>='m'&&passwd[i]<='o') {
                passwd[i] = '6';
            } else if(passwd[i]>='p'&&passwd[i]<='s') {
                passwd[i] = '7';
            } else if(passwd[i]>='t'&&passwd[i]<='v') {
                passwd[i] = '8';
            } else if(passwd[i]>='w'&&passwd[i]<='z') {
                passwd[i] = '9';
            }
        }
    }

    cout<<passwd<<endl;
    return 0;
}

