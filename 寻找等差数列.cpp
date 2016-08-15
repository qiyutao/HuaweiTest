#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> getPrim(int m,int n) {
    vector<int> vt;

    if(m<2)
        m=2;
    for(int i=m;i<=n;i++) {
        bool flag = true;
        for(int j=2;j<=sqrt(i);j++) {
            if(i%j==0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            vt.push_back(i);
        }
    }

    return vt;
}

int find(vector<int> vt,int begin,int target) {
    for(int i=begin;i<vt.size();i++) {
        if(vt[i]==target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int m,n;
    cin>>m>>n;

    vector<int> prime,max,tmp;
    int maxd = 0,tmpd;
    prime = getPrim(m,n);

    for(int i=0;i<prime.size();i++) {
        for(int j = i+1;j<prime.size();j++) {
            int d = prime[j] - prime[i];
            tmpd = d;
            tmp.push_back(prime[i]);
            tmp.push_back(prime[j]);
            int k = j+1;
            while(k!=-1) {
                k = find(prime,k,prime[j]+d);
                d += tmpd;
                if(k!=-1)
                    tmp.push_back(prime[k]);
                //if(prime[j]==11) cout<<k<<" "<<prime[k]<<" "<<prime[j]+d<<endl;
            }

            if((max.size()<tmp.size())||(max.size()==tmp.size()&&maxd<tmpd)) {
                max = tmp;
                maxd = tmpd;
            }
            tmp.clear();
        }
    }

    for(int i=0;i<max.size()-1;i++) {
        cout<<max[i]<<" ";
    }
    cout<<max.back();

    return 0;
}
