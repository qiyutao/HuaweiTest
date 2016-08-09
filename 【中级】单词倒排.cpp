#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	char str[1000];
	gets(str);
	
	vector<vector<char> > vt;
	vector<char> tmp;
	for(int i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a'&&str[i]<='z')||
			(str[i]>='A'&&str[i]<='Z'))
		{
			tmp.push_back(str[i]);	
		}
		else
		{
			if(!tmp.empty())
			{
				vt.push_back(tmp);
				tmp.clear();
			}
		}
	}
	vt.push_back(tmp);
	
	for(int j=0;j<vt.back().size();j++)
	{
			cout<<vt.back()[j];
	}
	
	for(int i=vt.size()-2;i>=0;i--)
	{
		cout<<" ";
		for(int j=0;j<vt[i].size();j++)
		{
			
			cout<<vt[i][j];
		}
		
	}
	cout<<endl;
	
	return 0;
}
