#include <iostream>
#include <set>

using namespace std;

int main()
{
	char str[30];
	while(cin>>str)
	{
		if(strlen(str)>20)
		return 0;
	else
	{
	int alpha[26] = {0};
	int min = 10000;
	bool flag = true;
	for(int i=0;str[i]!='\0';i++)
	{
		alpha[str[i]-97]++;
		if(str[i]>'z'||str[i]<'a')
		return 0;
	} 
	
	for(int i=0;i<26;i++)
	{
		if(min>alpha[i]&&alpha[i]!=0)
	 		min = alpha[i];
		
	} 
	
	set<char> st;
	for(int i=0;i<26;i++)
	{
		if(min==alpha[i])
		st.insert(i+97);
	}
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(flag)
		{
			if(st.find(str[i])==st.end())
			{
				cout<<str[i];
			}
		}
		
		else
			cout<<str[i];
		
	}
	cout<<endl;
	}
	}
	return 0;
}
