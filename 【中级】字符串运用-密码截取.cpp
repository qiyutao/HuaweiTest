#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[80];
	while(cin>>str)
	{
		int count = 0;
		if(strlen(str)==1)
		{
			cout<<"1"<<endl;
			return 0;
		}
		char k1,k2;
		k1 = str[0];
		k2 = str[1];
		if(strlen(str)==2)
		{
			if(k1==k2)
			{
				cout<<"2"<<endl;
				
			}
			else
			cout<<"0"<<endl;
			return 0; 
		}
		
		for(int i=2;str[i]!='\0';i++)
		{
			int tmp = 0;
			if(k2 == str[i])
			{
				tmp += 2;
				for(int j=1;0<=i-j-1&&str[i+j]!=0;j++)
				{
					if(str[i-j-1]==str[i+j])
					tmp += 2;
					else
					break;
				}
			}
			else if(k1==str[i])
			{
				tmp += 3;
				for(int j=1;0<=i-j-1&&str[i+j]!=0;j++)
				{
					if(str[i-j-1]==str[i+j])
					tmp += 2;
					else
					break;
				}
			}
			k1 = k2;
			k2 = str[i];
			if(tmp>count)
			count = tmp;
		}
		cout<<count<<endl;
	}
	
	return 0;
}
