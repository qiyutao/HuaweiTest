#include <iostream>
#include <set>

using namespace std;

int main() 
{
	char ch[2000];
	gets(ch);
	
	set<char> st;
	for(int i=0;ch[i]!='\0';i++)
	{
		st.insert(ch[i]);
	}
	
	cout<<st.size();
	
	return 0;
}
