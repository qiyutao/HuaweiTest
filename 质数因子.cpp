#include <iostream>
 
using namespace std;
 
int main()
{
    long n;
    cin >>n ;
     
    int i = 2;
    while(n != 1)
    {
        if( n % i == 0)
        {
            n /= i;
            cout << i << " ";
        }
        else
            i++;
    }
    return 0;
}
