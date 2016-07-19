#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <set>

using namespace std;

bool alpha(string str)
{
	bool num = true;
	bool lowcase = true;
	bool upcase = 1;
	bool other = 1;
	int count = 0;
	for(int i=0;i<str.length();i++)
	{
		char c = str.at(i);
		if(c>=48&&c<=57&&num)
		{
			count++;
			num = 0;
		}
		else if(c>=65&&c<=90&&upcase)
		{
			count++;
			upcase = 0;
		}
		else if(c>=97&&c<=122&&lowcase)
		{
			count++;
			lowcase = 0;
		}
		else if(other&&!(c>=48&&c<=57)&&!(c>=65&&c<=90)&&!(c>=97&&c<=122))
		{
			count++;
			other = 0;
		}
	} 
	
	return count>=3;
}

bool sub(string str)
{
	for(int i=0;i<str.length();i++)
	{
		for(int j=i+2;j<str.length();j++)
		{
			if(str.at(i)==str.at(j))
			{
				if(j+1==str.length())
				break;
				if(str.at(i+1)==str.at(j+1))
				{
					if(j+2==str.length())
					break;
					if(str.at(i+2)==str.at(j+2))
					{
						return 0;
					}	
				}	
			}
			
		}
		
	}
	return 1;
}

int main()
{
	string str = "";
	
	while(cin>>str)
	{
		if(str.length()<=8)
			cout<<"NG"<<endl;
		else
		{
			if(alpha(str))
			{
				if(sub(str))
					cout<<"OK"<<endl;
				else
					cout<<"NG"<<endl; 
			}
			else
			{
				cout<<"NG"<<endl;
			}
		}
	}
	
	return 0;
}
