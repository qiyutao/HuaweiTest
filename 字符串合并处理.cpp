#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string str,str1;
	cin>>str>>str1;
	
	str += str1;
	
	vector<char> vt1,vt2;
	for(int i=0;i<str.size();i++)
	{
		if(i%2==0)
			vt1.push_back(str.at(i));
		else
			vt2.push_back(str.at(i));
	}
	
	sort(vt1.begin(),vt1.end());
	sort(vt2.begin(),vt2.end());
	
	int j=0;
	for(int i=0;i<str.size();i++)
	{
		if(i%2==0)
			str.at(i) = vt1[j];
		else
		{
			str.at(i) = vt2[j];
			j++;
		}
			
	}
	
	for(int i=0;i<str.size();i++)
	{
		switch(str.at(i))
		{
			case '0':
				str.at(i) = '0';
				break;
			case '1':
				str.at(i) = '8';
				break;
			case '2':
				str.at(i) = '4';
				break;
			case '3':
				str.at(i) = 'C';
				break;
			case '4':
				str.at(i) = '2';
				break;
			case '5':
				str.at(i) = 'A';
				break;
			case '6':
				str.at(i) = '6';
				break;
			case '7':
				str.at(i) = 'E';
				break;
			case '8':
				str.at(i) = '1';
				break;
			case '9':
				str.at(i) = '9';
				break;
			case 'a':
			case 'A':
				str.at(i) = '5';
				break;
			case 'b':
			case 'B':
				str.at(i) = 'D';
				break;
			case 'c':
			case 'C':
				str.at(i) = '3';
				break;
			case 'd':
			case 'D':
				str.at(i) = 'B';
				break;
			case 'e':
			case 'E':
				str.at(i) = '7';
				break;
			case 'f':
			case 'F':
				str.at(i) = 'F';
				break;
			default:
				break;
			
		}
	}
	
	cout<<str;
	
	return 0;
}
