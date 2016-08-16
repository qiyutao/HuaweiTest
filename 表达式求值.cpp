#include <iostream>
#include <stack>
#include <string>

using namespace std;

int getNum(int &i,string sub) {
    int old = i;
    for(;i<sub.size();i++) {
        if(sub.at(i)>'9'||sub.at(i)<'0') {
            return atoi(sub.substr(old,i).c_str());
        }
    }
    return atoi(sub.substr(old,i).c_str());
}

int above(char c) {
    if(c=='+'||c=='-')
        return 0;
    if(c=='*'||c=='/')
        return 1;
    if(c=='(')
        return 4;
    return 0;
}

int cal(int n2,int n1,char opt) {
    switch (opt) {
        case '+':
            return n1+n2;
        case '-':
            return n1-n2;
        case '*':
            return n1*n2;
        case '/':
            return n1/n2;
    }
    return 0;
}

int main() {
    string expr;
    cin>>expr;
    stack<char> opt;
    stack<int> num;

    char old = '+';

    int i=0;
    while(i<expr.size()) {
        if(expr.at(i)>='0'&&expr.at(i)<='9') {
            num.push(getNum(i,expr));
            old = '0';
        } else if((old=='+'||old=='-'||old=='*'||old=='/'
                   ||old=='(' )&&expr.at(i)=='-') {
            i++;
            num.push(-1*getNum(i,expr));
            old = '0';
        } else {
            if(opt.empty())
                opt.push(expr.at(i));
            else {
                if(expr.at(i)==')') {
                    while(opt.top()!='(') {
                        int n1 = num.top();
                        num.pop();
                        int n2 = num.top();
                        num.pop();
                        char c = opt.top();
                        opt.pop();
                        num.push(cal(n1, n2, c));
                    }
                    opt.pop();
                }
                else {
                    if(above(expr.at(i))>above(opt.top())||above(opt.top())>1)
                        opt.push(expr.at(i));
                    else {
                        bool f = true;
                        while(!opt.empty())
                        {
                            if(above(expr.at(i))<=above(opt.top())&&above(opt.top())<=1) {
                                int n1 = num.top();
                                num.pop();
                                int n2 = num.top();
                                num.pop();
                                char c = opt.top();
                                opt.pop();

                                num.push(cal(n1, n2, c));
                            }
                            else {
                                opt.push(expr.at(i));
                                f= false;
                                break;
                            }
                        }
                        if(f)
                            opt.push(expr.at(i));
                    }
                }
            }
            old = expr.at(i);
            i++;

        }
    }

    while(!opt.empty()) {
        int n1 = num.top();
        num.pop();
        int n2 = num.top();
        num.pop();
        char c = opt.top();
        opt.pop();
        num.push(cal(n1,n2,c));
    }

    cout<<num.top()<<endl;
    cout<<"true";
    return 0;
}
