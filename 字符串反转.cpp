#include <iostream>
#include <stack>

using namespace std;

int main()
{
	char c;
	stack<char> st;
	while((c=getchar())!='\n')
	{
		st.push(c);
	}
	
	while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}
	
	return 0;
}
