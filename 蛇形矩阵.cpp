#include <iostream>

using namespace std;

int main()
{
	int mat[101][101];
	int n;
	cin>>n;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			count++;
			mat[i-j][j] = count;
		}
	}
	
	int j;
	for(int i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<mat[i][n-i-1]<<endl;
	}
	cout<<mat[n-1][0];
	
	return 0;
}
