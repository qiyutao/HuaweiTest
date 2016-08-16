#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;

    string s3,s4;
    if(s1.size()>s2.size()) {
        s3 = s2;
        s4 = s1;
    } else {
        s3 = s1;
        s4 = s2;
    }

    int max = 0;
    string tmp;
    long x = 0;
    for(int i=0;i<s3.size();i++) {
        x = 0;
        while((x=s4.find(s3.at(i),x))!=string::npos) {
            int m = 1;
            int j = i+1;
            int k = x+1;
            if(j>=s3.size()||k>=s4.size())
                break;
            while(s3.at(j)==s4.at(k)) {
                j++;
                k++;
                m++;
                if(j>=s3.size()||k>=s4.size())
                    break;
            }

            if(m>max) {
                tmp = s4.substr(x,k-x);
                max = m;
            }
            x++;
            if(x>=s4.size())
                break;
        }
    }

    cout<<tmp;

    return 0;
}
