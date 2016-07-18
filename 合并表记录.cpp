#include <iostream>
#include <map>

using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	map<int,int> maps;
	int key,val;
	for(int i=0;i<n;i++)
	{
		cin>>key>>val;
		map<int,int>::iterator it;
		it = maps.find(key);
		if(it!=maps.end())
		{
			it->second += val;
		}
		else
		{
			maps.insert(pair<int,int>(key,val));
		}
	}
	
	map<int,int>::iterator it;
	for(it = maps.begin();it!=maps.end();it++)
	cout<<it->first<<" "<<it->second<<endl; 
	
	return 0;
}
