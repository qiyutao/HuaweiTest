#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		set<string> st;
		for(int i=0;i<n;i++)
		{
			string str;
			cin>>str;
			st.insert(str);
		}
		string str_find;
		int index;
		cin>>str_find>>index;
		
		set<string>::iterator it;
		int pos = 0;
		int count = 0;
		string result;
		string tmp1 = str_find;
		sort(tmp1.begin(),tmp1.end());
		for(it=st.begin();it!=st.end();it++)
		{
			string tmp = *it;
			sort(tmp.begin(),tmp.end());
			
			if(tmp1==tmp&&str_find!=*it)
			{
				if(index == (pos+1))
				{
					result = *it;
				}
				pos++;
				count++;
			}
		}
		
		cout<<count<<endl;
		cout<<result<<endl;
	}
	
	return 0;
}
