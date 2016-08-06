#include <iostream>

using namespace std;

int main()
{
	char text[200],text1[200];
	cin>>text;
	cin>>text1;
	for(int i=0;text[i]!='\0';i++)
	{
		if(text[i]>='a'&&text[i]<='z')
		{
			text[i]++;
			text[i] -= 'a';
			text[i] %= 26;
			text[i] += 'A';
		}
		else if(text[i]>='A'&&text[i]<='Z')
		{
			text[i]++;
			text[i] -= 'A';
			text[i] %= 26;
			text[i] += 'a';
		}
		else if(text[i]>='0'&&text[i]<='9')
		{
			text[i]++;
			text[i] -= '0';
			text[i] %= 10;
			text[i] += '0';
		}
	}
	
	for(int i=0;text1[i]!='\0';i++)
	{
		if(text1[i]>='a'&&text1[i]<='z')
		{
			
			text1[i] -= 'a';
			text1[i]--;
			if(text1[i]<0)
			text1[i] = 25;
			text1[i] += 'A';
		}
		else if(text1[i]>='A'&&text1[i]<='Z')
		{
			text1[i]--;
			text1[i] -= 'A';
			if(text1[i]<0)
			text1[i] = 25;
			text1[i] += 'a';
		}
		else if(text1[i]>='0'&&text1[i]<='9')
		{
			text1[i]--;
			text1[i] -= '0';
			if(text1[i]<0)
			text1[i] = 9;
			text1[i] += '0';
		}
	}
	
	cout<<text<<endl;
	cout<<text1<<endl;
	
	return 0;
}
