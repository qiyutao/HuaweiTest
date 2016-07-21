#include <iostream>

using namespace std;

int position(int n[],int start,int end)
{
	int flag = n[start];
	int i=start+1;
	int j = end;
	while(i<j)
	{
		while(n[i]<=flag) i++;
		while(n[j]>flag) j--;
		if(i<j)
		{
			int tmp = n[i];
			n[i] = n[j];
			n[j] = tmp;
		}
		
	}
	
	int tmp = n[i-1];
	n[i-1] = n[start];
	n[start] = tmp;
	
	return i-1;
	
}

void quicksort(int n[],int start,int end)
{
	if(start<end)
	{
		int a = position(n,start,end);
		quicksort(n,start,a-1);
		quicksort(n,a+1,end);
	}
}

int main(int argc, char *argv[])
{
	int n[10];
	for(int i=0;i<10;i++)
	cin>>n[i];
	
	quicksort(n,0,9);
	
	for(int i=0;i<10;i++)
	cout<<n[i]<<" ";
	
	return 0;
}
