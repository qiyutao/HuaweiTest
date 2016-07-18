#include <iostream>
#include <stdio.h>
#include <stack>
#include <cmath>

using namespace std;

int main() 
{
	char num[80];
	while(scanf("%s",num)!=EOF)
	{
		stack<int> st;
		for(int i=2;num[i]!='\0';i++)
		{
			if(num[i]>60)
			st.push(num[i]-55);
			else
			st.push(num[i]-48);
		}
		int i=0;
		int n;
		int total = 0;
		while(!st.empty())
		{
			n = st.top();
			st.pop();
			total += n*pow(16.0,i);
			i++;
		}
		
		cout<<total<<endl;
	}
	
	return 0;
}
