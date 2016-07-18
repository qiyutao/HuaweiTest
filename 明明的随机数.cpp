#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int main() 
{
	int n;
	while(scanf("%d",&n)!= EOF)
	{
		int tmp;
		set<int> st;
		for(int i=0;i<n;i++)
		{
			cin>>tmp;
			st.insert(tmp);
		}
		
		set<int>::iterator it;
		for(it = st.begin();it!=st.end();it++)
			cout<<*it<<endl;
	}
	return 0;
}
