#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
	char str[6000];
	gets(str);
	
	char *result = NULL;
	char *old_res = NULL;
	char x[] = " ";
	result = strtok(str,x);
	
	while(result!=NULL)
	{
		old_res = result;
		result = strtok(NULL,x);
	}
	cout<<strlen(old_res);
	
	return 0;
}

