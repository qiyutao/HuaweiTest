#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <vector>

using namespace std;

char low(char c)
{
	switch(c)

		{

		case 'a':

		case 'b':

		case 'c':

			return '2';

		case 'd':

		case 'e':

		case 'f':

			return '3';

		case 'g':

		case 'h':

		case 'i':

			return '4';

		case 'j':

		case 'k':

		case 'l':

			return '5';

		case 'm':

		case 'n':

		case 'o':

			return '6';

		case 'p':

		case 'q':

		case 'r':

		case 's':

			return '7';

		case 't':

		case 'u':

		case 'v':

			return '8';

		case 'w':

		case 'x':

		case 'y':

		case 'z':

			return '9';

		default:

			return '0';

		}
}

int main()
{
	
	char password[200];
	
	while(cin>>password)
	{
		for(int i=0;password[i]!='\0';i++)
		{
			if(password[i]>='a'&&password[i]<='z')
			{
				password[i] = low(password[i]);
			}
			else if(password[i]>='A'&&password[i]<='Z')
			{
				password[i] -= 65;
				password[i]++;
				password[i] %= 27;
				password[i] += 97;
			}
		}
		
		cout<<password<<endl;
	}
	
	return 0;	
}
