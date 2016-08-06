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


//----------------------------------------------------------
#include <iostream>
#include <cstring>

using namespace std;

bool isDiffer(char* str)
{
	int counta = 0;
	int countA = 0;
	int countN = 0;
	int countOther = 0;
	int size = strlen(str);
	for(int i=0;i<size;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			counta++;
		else if(str[i]>='A'&&str[i]<='Z')
			countA++;
		else if(str[i]>='0'&&str[i]<='9')
			countN++;
		else
			countOther++;
	}
	if(counta!=0&&countA!=0&&countN!=0&&countOther!=0||
	counta==0&&countA!=0&&countN!=0&&countOther!=0||
	counta!=0&&countA==0&&countN!=0&&countOther!=0||
	counta!=0&&countA!=0&&countN==0&&countOther!=0||
	counta!=0&&countA!=0&&countN!=0&&countOther==0)
		return true;
	return false;
}

bool isSub(char *str)
{
	int size = strlen(str);
	for(int i=0;i<size-3;i++)
	{
		for(int j = i+1;j<size;j++)
		{
			if(str[i]==str[j])
			{
				if(str[i+1]==str[j+1])
				{
					if(str[i+2]==str[j+2])
					{
						return false;
					}	
				}
			}
		}
	}
	
	return true;
}

int main()
{
	char password[80];
	while(cin>>password)
	{
		if(strlen(password)<9)
		{
			cout<<"NG"<<endl;
		}
		else
		{
			if(!isDiffer(password))
				cout<<"NG"<<endl;
			else
			{
				if(isSub(password))
					cout<<"OK"<<endl;
				else	
					cout<<"NG"<<endl;
			}
		}
	}
	
	return 0;
}

