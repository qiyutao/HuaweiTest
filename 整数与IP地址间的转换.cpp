#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

stack<int> getBin(int a)
{
	stack<int> st;
	while(a>255)
	{
		st.push(a%256);
		a /= 256;
	}
		st.push(a);

	return st;
}

int main() 
{
	char ip[80];
	int num;
	cin>>ip>>num;
	
	int num1 = 0;
	char *result = strtok(ip,".");
	num1 += atoi(result)*256*256*256;
	result = strtok(NULL,".");
	num1 += atoi(result)*256*256;
	result = strtok(NULL,".");
	num1 += atoi(result)*256;
	result = strtok(NULL,".");
	num1 += atoi(result);
	cout<<num1<<endl;
	
	stack<int> st = getBin(num);
	cout<<st.top()<<".";
	st.pop();
	cout<<st.top()<<".";
	st.pop();
	cout<<st.top()<<".";
	st.pop();
	cout<<st.top();
	st.pop();
	
	return 0;
}
