#include <iostream>

using namespace std;

int max(int a[],int begin,int end){
	int max = 0;
	for(int i = begin-1;i<end;i++) {
		if(max<a[i])
		max = a[i];
	}
	return max; 
}

int main() {
	int n,m;
	while(cin>>n>>m) {
		int score[n];
		for(int i =0;i<n;i++)
		cin>>score[i];
		
		char type;
		int begin,end;
		for(int i=0;i<m;i++) {
			cin>>type>>begin>>end;
			if(type=='Q') {
				if(begin<=end)
				cout<<max(score,begin,end)<<endl;
				else
				cout<<max(score,end,begin)<<endl;
			} else {
				score[begin-1] = end;
			}
		}
	}
	return 0;
}
