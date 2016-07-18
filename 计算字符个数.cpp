#include <iostream>

using namespace std;

int main() 
{
	char str[6000];
	gets(str);
	
	char a = getchar();
	
	int count = 0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(a==str[i])
			count++;
	}
	
	cout<<count;
	
	return 0;
}
