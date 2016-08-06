#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

bool compare(const char a, const char b)
{
	int aa = ((int)a)&0xDf;
	int bb = ((int)b)&0xDf;
	return aa<bb;
} 

int main()
{
	char buff[1000];
	gets(buff);
	
		char str[1000] = {'\0'};
		char other[1000] = {'\0'};
		int pos[1000];
		for(int i=0;i<1000;i++)
			pos[i] = -1;
		char c;
		int size1=0,size2=0;
		for(int i=0;buff[i]!='\0';i++)
		{
			c = buff[i];
			if((c>='a'&&c<='z')||
			(c>='A'&&c<='Z'))
			{
				str[size1] = c;
				size1++;
			}
			else
			{
				other[size2] = c;
				pos[size2] = size1;
				size2++;
			}
		}
	
		stable_sort(str,str+size1,compare);
		
		int j=0,i;
		for(i=0;i<size1;i++)
		{
			while(i==pos[j])
			{
				cout<<other[j];
				j++;
			}
			cout<<str[i];
		}
		
		for(i=j;i<size2;i++)
		cout<<other[i];
		cout<<endl;
	
	 
	return 0;
}
