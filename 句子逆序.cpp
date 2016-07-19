#include <iostream>
#include <stack>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	char str[1000];
	gets(str);
	
	char *result = NULL;
	result = strtok(str," ");
	stack<string> st;
	while(result != NULL)
	{
		string tmp(result);
		st.push(tmp);
		result = strtok(NULL," ");
	}
	
	while(!st.empty())
	{
		cout<<st.top();
		st.pop();
		if(!st.empty())
		cout<<" ";
	}
	
	return 0;
}
