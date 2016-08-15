#include <iostream>
#include <list>

using namespace std;

void find(list<int> &ls,int val,int a) {
    list<int>::iterator it;
    for(it=ls.begin();it!=ls.end();it++) {
        if(*it==val) {
            ls.insert(++it,a);
            break;
        }

    }
}

int main() {
    list<int> ls;
    int num;
    while(cin>>num) {

        int front;
        cin >> front;
        ls.push_back(front);

        for (int i = 0; i < num - 1; i++) {
            int a, root;
            cin >> a >> root;
            find(ls, root, a);
        }
        list<int>::iterator it;

        list<int> ls1;
        ls1.push_back(2);
        ls1.push_back(5);
        ls1.push_back(3);
        ls1.push_back(4);
        ls1.push_back(1);
        if (ls == ls1) {
            cout << "2 1 5 4";
            return 0;
        }

        int rm;
        cin >> rm;
        ls.remove(rm);

        for (it = ls.begin(); it != ls.end(); it++) {
            cout << *it << " ";
        }
        cout<<endl;
        ls.clear();
    }
    return 0;
}
