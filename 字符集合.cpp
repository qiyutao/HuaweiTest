#include <iostream>
#include <string>

using namespace std;

int main() {
	string in;
	while(cin >> in){

	string out;
	for(int i=0;i<in.length();i++){
		if(out.find(in[i])==string::npos)
		out+=in[i];
	}
	cout<<out<<endl;
	}
	return 0;
} 
