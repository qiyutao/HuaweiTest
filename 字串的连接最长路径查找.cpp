#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	int num;
	cin>>num;
	
	multiset<string> st;
	string str;
	
	for(int i=0;i<num;i++)
	{
		cin>>str;
		st.insert(str);
	}
	
	set<string>::iterator it;
	for(it = st.begin();it!=st.end();it++)
	{
		cout<<*it<<endl;
	}
	
	return 0;
}
