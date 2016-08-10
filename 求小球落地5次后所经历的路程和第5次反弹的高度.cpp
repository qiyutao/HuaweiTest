#include <iostream>

using namespace std;

int main() {
    double high;
    cin>>high;

    double total = high;
    for (int i = 0; i < 4; ++i) {
        total += high;
        high /= 2.0;
    }
    high /= 2.0;
    cout<<total<<endl;
    cout<<high;

    return 0;
}
