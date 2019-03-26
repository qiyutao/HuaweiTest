#include <iostream>
#include <list>

using namespace std;

/*bool isZero(int a[],int size){
	int sum = 0;
	for(int i = 0;i<size;i++) {
		sum+=a[i];
	}
	if(sum==0)
		return true;
	else
		return false;
}*/

int main() {
	int n;
	while(cin >> n){

	list<int> num;
	
	for(int i=0;i<n;i++)
	num.push_back(i);
	
	list<int>::iterator it = num.begin();
	
	while(num.size()!=1) {
		it++;
		if(it==num.end())
		it = num.begin();
		it++;
		if(it==num.end())
		it = num.begin();
		//cout<<*it<<endl;
		it = num.erase(it);
		if(it==num.end())
		it = num.begin();
		
	}
	cout<<*(num.begin())<<endl;
	}
	//system("pause");
	return 0;
} 
