#include <iostream>
#include <set>
#include <stack>

using namespace std;

int main() 
{
	char num[80];
	
	cin>>num;
	set<char> st;
	stack<char> stk;
	for(int i=0;num[i]!='\0';i++)
	{
		stk.push(num[i]);
	}
	
	while(!stk.empty())
	{
		char n = stk.top();
		if(st.insert(n).second)
		cout<<n;
		stk.pop();
	}
	
	return 0;
}
