#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    //cout<<s1.size()<<" "<<s2.size()<<endl;
    string s3,s4;
    if(s1.size()>s2.size()) {
        s3 = s2;
        s4 = s1;
    } else {
        s3 = s1;
        s4 = s2;
    }

    int flag[1000];
    for(int i=0;i<1000;i++) {
        flag[i] = -1;
    }
    int x = 0;

    for(int i=0;i<s3.size();i++) {
        long pos = s4.find(s3.at(i));
        if(pos!=string::npos) {
            s4.at(pos) = -1;//
            flag[pos] = x;
            x++;
        }

    }

    int count = 0;
    int old = -1;
    for(int i=0;i<1000;i++) {
        if(old<flag[i]) {
            count++;

        }
        old = flag[i];
    }

    cout<<s4.size()-count;

    return 0;
}
