#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() 
{
	string str;
	cin>>str;
	
	multiset<char> st;
	
	for(int i=0;i<str.size();i++)
		st.insert(str.at(i));
		
	multiset<char>::iterator it;
	for(it=st.begin();it!=st.end();it++)
		cout<<*it;
	
	return 0;
}
