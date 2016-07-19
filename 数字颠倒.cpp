#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;
	
	while(num>=10)
	{
		int tmp = num%10;
		num /= 10;
		cout<<tmp;
	}	
	cout<<num;
	
	return 0;
}
