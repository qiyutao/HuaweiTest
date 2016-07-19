#include <iostream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

int main()
{
	char str[10000];
	while(scanf("%s",str)!=EOF){
	
	vector<string> vt;
	char *result = NULL;
	result = strtok(str,";");
	while(result!=NULL)
	{
		string tmp(result);
		if(tmp.length()<4)
			vt.push_back(tmp);
		result = strtok(NULL,";");
	}
	int x = 0, y = 0;
	for(int i=0;i<vt.size();i++)
	{
		int num;
		if(vt[i].size()==3)
		{
			if(vt[i].at(1)>=48&&vt[i].at(1)<=57&&
				vt[i].at(2)>=48&&vt[i].at(2)<=57)
				{
					num=(vt[i].at(1)-48)*10+(vt[i].at(2)-48);
				}
			else
			continue;
		}
		else if(vt[i].size()==2)
		{
			if(vt[i].at(1)>=48&&vt[i].at(1)<=57)
				{
					num=(vt[i].at(1)-48);
				}
			else
			continue;
		}
		else
		continue;
		switch(vt[i].at(0))
		{
			case 'A':
				x -= num;
				break;
			case 'D':
				x += num;
				break;
			case 'W':
				y += num;
				break;
			case 'S':
				y -= num;
				break;
			default:
				break;
		}
	}
	
	cout<<x<<","<<y<<endl;
	}
	return 0;
}
