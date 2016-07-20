#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <vector>

using namespace std;

int main()
{
	
	int n;
	while(cin>>n)
	{
	int total = 0;
	for(int i=7;i<=n;i++)
	{
		if(i%7==0)
		{
			total++;
			continue;
		}
		else
		{
			char str[10];
			
			sprintf(str,"%d",i);
			for(int j=0;str[j]!='\0';j++)
			{
				if(str[j]=='7')
				{
					total++;
					break;
				}
			}
		}
	}
	cout<<total<<endl;
    }
	return 0;	
}
