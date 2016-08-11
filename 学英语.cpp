#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1[10] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten" };
    string s2[9] = { "eleven", "twelve", "thirteen", "forty","fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    string s3[8] = { "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

    string num;
    cin>>num;

    int pow = num.size();

    if(pow>10||num[0]=='-')
        cout<<"“error”";
    else {
        for (int i = 0; i < num.size(); i++) {
            switch (pow) {
                case 10:
                    cout << s1[num.at(i) - '1'] << " billion";
                    break;
                case 9:
                    if(num.size()==9) {
                        if (num.at(i) != '0') {
                            cout <<s1[num.at(i) - '1'] << " hundred";
                            if (num.at(i + 1) != '0' || num.at(i + 2) != '0')
                                cout << " and";
                        }
                    }
                    else {
                        if (num.at(i) != '0') {
                            cout <<" "<< s1[num.at(i) - '1'] << " hundred";
                            if (num.at(i + 1) != '0' || num.at(i + 2) != '0')
                                cout << " and";
                        }
                    }

                    break;
                case 8:
                    if(num.size()==8) {
                        if (num.at(i) != '0') {
                            if (num.at(i) == '1') {
                                i++;
                                if (num.at(i) == '0')
                                    cout << "ten";
                                else
                                    cout << s2[num.at(i) - '1'];
                                i--;
                            }
                            else
                            cout << s3[num.at(i) - '2'];
                        }
                    }
                    else {
                        if (num.at(i) != '0') {
                            if (num.at(i) == '1') {
                                i++;
                                if (num.at(i) == '0')
                                    cout <<" "<< "ten";
                                else
                                    cout <<" "<< s2[num.at(i) - '1'];
                                i--;
                            }
                            else
                            cout <<" "<< s3[num.at(i) - '2'];
                        }
                    }

                    break;
                case 7:
                    if(num.size()==7) {
                        if(i==0)
                            cout << s1[num.at(i) - '1'] << " million";
                        else
                        {
                            if (num.at(i) != '0'&&num.at(i - 1) != '1')
                                cout << s1[num.at(i) - '1'] << " million";
                            else
                                cout<< " million";
                        }

                    }
                    else {
                        if(i==0)
                            cout <<" "<< s1[num.at(i) - '1'] << " million";
                        else
                        {
                            if (num.at(i) != '0'&&num.at(i - 1) != '1')
                                cout <<" "<< s1[num.at(i) - '1'] << " million";
                            else
                                cout<< " million";
                        }
                    }


                    break;
                case 6:
                    if(num.size()==6) {
                        if (num.at(i) != '0') {
                            cout << s1[num.at(i) - '1'] << " hundred";
                            if (num.at(i + 1) != '0' || num.at(i + 2) != '0')
                                cout << " and";
                        }
                    }
                    else {
                        if (num.at(i) != '0') {
                            cout <<" "<< s1[num.at(i) - '1'] << " hundred";
                            if (num.at(i + 1) != '0' || num.at(i + 2) != '0')
                                cout << " and";
                        }
                    }

                    break;
                case 5:
                    if(num.size()==5) {
                        if (num.at(i) != '0') {
                            if (num.at(i) == '1') {
                                i++;
                                if (num.at(i) == '0')
                                    cout << "ten";
                                else
                                    cout << s2[num.at(i) - '1'];
                                i--;
                            }
                            else
                            cout<< s3[num.at(i) - '2'];
                        }
                    }
                    else{
                        if (num.at(i) != '0') {
                            if (num.at(i) == '1') {
                                i++;
                                if (num.at(i) == '0')
                                    cout << " ten";
                                else
                                    cout <<" "<< s2[num.at(i) - '1'];
                                i--;
                            }
                            cout <<" "<< s3[num.at(i) - '2'];
                        }
                    }

                    break;
                case 4:
                    if(num.size()==4)
                    {
                        if(i==0)
                            cout << s1[num.at(i) - '1'] << " thousand";
                        else {
                            if (num.at(i) != '0'&&num.at(i - 1) != '1')
                                cout << s1[num.at(i) - '1'] << " thousand";
                            else
                                cout<< " thousand";
                        }
                    }
                    else {
                        if(i==0)
                            cout <<" "<< s1[num.at(i) - '1'] << " thousand";
                        else {
                            if (num.at(i) != '0'&&num.at(i - 1) != '1')
                                cout <<" "<< s1[num.at(i) - '1'] << " thousand";
                            else
                                cout<< " thousand";
                        }
                    }


                    break;
                case 3:
                    if(num.size()==3)
                    {
                        if (num.at(i) != '0') {
                            cout <<s1[num.at(i) - '1'] << " hundred";
                            if (num.at(i + 1) != '0' || num.at(i + 2) != '0')
                                cout << " and";
                        }
                    }
                    else
                    {
                        if (num.at(i) != '0') {
                            cout <<" "<< s1[num.at(i) - '1'] << " hundred";
                            if (num.at(i + 1) != '0' || num.at(i + 2) != '0')
                                cout << " and";
                        }
                    }


                    break;
                case 2:
                    if(num.size()==2)
                    {
                        if (num.at(i) != '0') {
                            if (num.at(i) == '1') {
                                i++;
                                if (num.at(i) == '0')
                                    cout << "ten";
                                else
                                    cout << s2[num.at(i) - '1'];
                                return 0;
                            }
                            cout << s3[num.at(i) - '2'];
                        }
                    }
                    else
                    {
                        if (num.at(i) != '0') {
                            if (num.at(i) == '1') {
                                i++;
                                if (num.at(i) == '0')
                                    cout << " ten";
                                else
                                    cout <<" "<< s2[num.at(i) - '1'];
                                return 0;
                            }
                            cout <<" "<< s3[num.at(i) - '2'];
                        }
                    }

                    break;
                case 1:
                    if(num.size()==1)
                    {
                        if (num.at(i) != '0')
                            cout << s1[num.at(i) - '1'];
                    }
                    else
                    {
                        if (num.at(i) != '0')
                            cout <<" "<< s1[num.at(i) - '1'];
                    }

                    break;

            }
            pow--;
        }
    }
    return 0;
}
