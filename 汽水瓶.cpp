#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int n = -1;
	while(cin>>n,n!=0)
	{
		int total = 0;
		while(n!=0&&n!=1)
		{
			n -= 2;
			total++;
		}
		
		cout<<total<<endl;
	}
	
	
	return 0;	
}
