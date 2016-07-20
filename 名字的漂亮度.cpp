#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <vector>

using namespace std;

int main()
{
	
	int n;
	cin>>n;
	
	vector<string> vt_str;
	for(int i=0;i<n;i++)
	{
		string str;
		cin>>str;
		vt_str.push_back(str);
	}
	for(int i=0;i<vt_str.size();i++)
	{
		int alpha[26] = {0};
		
		for(int j=0;j<vt_str[i].size();j++)
		{
			char c = vt_str[i].at(j);
			if(c>96)
			c -= 32;
			//cout<< c;
			alpha[c-65]++;
		}
		
		multiset<int> st;
		for(int j=0;j<26;j++)
		{
			if(alpha[j]!=0)
			st.insert(alpha[j]);
		}
			
			
		vector<int> vt;
		multiset<int>::iterator it;
		for(it=st.begin();it!=st.end();it++)
			vt.push_back(*it);
		
		int cur = 26;
		int count = 0;	
		while(!vt.empty())
		{
			count = count + cur*vt.back();
			vt.pop_back();
			cur--;
		}
		cout<<count<<endl;
	}
	
	return 0;	
}
