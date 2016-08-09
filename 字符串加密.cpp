#include <iostream>
#include <set>

using namespace std;

int main()
{
	char alpha[26];
	char str[80];
	char text[80];
	
	cin>>str>>text;
	int flag = 0;
	set<char> st;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]<'a')
		{
			str[i] -= 'A';
			str[i] += 'a';
		}
		if(st.insert(str[i]).second)
		{
			alpha[flag] = str[i];
			
			flag++;
		}
	}
	
	for(char i='a';i<='z';i++)
	{
		if(st.insert(i).second)
		{
			alpha[flag] = i;
			
			flag++;
		}
	}
	
	for(int i=0;text[i]!='\0';i++)
	{
		if(text[i]<='Z'&&text[i]>='A')
		{
			text[i] -= 'A';
			char ch = alpha[(int)text[i]];
			ch -= 'a';
			cout<<(char)(ch+'A');
		}
		
		else if(text[i]<='z'&&text[i]>='a')
		{
			text[i] -= 'a';
			char ch = alpha[(int)text[i]];
			cout<<ch;
		}
		else
		cout<<text[i];
	}
	
	
	return 0;
}
