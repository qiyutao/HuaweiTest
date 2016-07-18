#include <iostream>
#include <stdio.h>

using namespace std;

void output(char *str);

int main() 
{
	char str1[200],str2[200];
	
	gets(str1);
	gets(str2);
	
	output(str1);
	output(str2);
	
	return 0;
}

void output(char *str)
{
	if(str==NULL)
	return ;
	
	int i=0;
	while(str[i]!='\0')
	{
		for(int j=0;j<8;j++)
		{
			if(str[i]=='\0')
			{
				cout<<"0";
			}
			else
			{
				cout<<str[i];
				i++;
			}
		}
		cout<<endl;
	}
}
