#include <iostream>
#include <vector>
#include <cstring>
#include <string> 

using namespace std;

int main(int argc, char *argv[])
{
	char file_name[80];
	int line_num; 
	vector<string> record_name;
	vector<int> record_line;
	while(scanf("%s%d",file_name,&line_num)!=EOF)
	{
		char *name = file_name;
		char *tok = NULL;
		tok = strtok(file_name,"\\");
		while(tok!=NULL)
		{
			name = tok;
			tok = strtok(NULL,"\\");
		}
		
		string str(name);
		if(str.length()>16)
		{
			record_name.push_back(str.substr(str.length()-16));
		}
		else
			record_name.push_back(str);
		record_line.push_back(line_num);
	}
	
	int i = 0;
	/*if(record_line.size()>8)
	i = record_line.size()-8;*/
	
	vector<string> name;
	vector<int> line;
	vector<int> count;
	
	for(;i<record_line.size();i++)
	{
		bool flag = 1;
		for(int j=0;j<name.size();j++)
		{
			if(record_name[i]==name[j])
			{
				if(record_line[i]==line[j])
				{
					count[j]++;
					flag=0;
					break;
				}
			}
		}
		if(flag)
		{
			name.push_back(record_name[i]);
		line.push_back(record_line[i]);
		count.push_back(1);
		}
		
	}
	if(name.size()>8)
	i = name.size()-8;
	else
	i = 0;
	for(;i<name.size();i++)
		cout<<name[i]<<" "<<line[i]<<" "<<count[i]<<endl;
	
	return 0;
}
