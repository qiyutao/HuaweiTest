#include <iostream>

using namespace std;

int main()
{
	int f1 = 1;
	int f2 = 1;
	int month;
	
	cin>>month;
	
	if(month<3)
		cout<<f1;
	else
	{
		int f3 = f1+f2;
		for(int i=3;i<month;i++)
		{
			int tmp;
			tmp = f2;
			f1 = tmp;
			f2 = f3;
			f3 = f1+f2;
		}
		
		cout<<f3;
	}
	
	return 0;
}
