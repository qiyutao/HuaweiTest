#include <iostream>

using namespace std;

int main() {
    int arr[1000];
    int num;

    cin>>num;
    for(int i=0;i<num;i++) {
        cin>>arr[i];
    }

    int k;
    cin>>k;
    int i = 0;
    for(;k!=num-1;k++) {
        i++;
    }

    cout<<arr[i];
    return 0;
}
