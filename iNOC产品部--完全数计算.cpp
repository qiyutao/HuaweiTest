#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin>>num;

    int total;

    int count = 0;
    for(int i=2;i<=num;i++) {
        total = 0;
        for(int j=1;j<i;j++) {
            if(i%j==0) {
                total += j;
            }
        }
        //total++;
        if(total == i)
            count++;
    }
    cout<<count;

    return 0;
}
