#include <iostream>

using namespace std;

int main()
{
    char str[1000];

    gets(str);

    int count[4];
    for(int i=0;i<4;i++)
        count[i] = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            count[0]++;
        else if(str[i]==' ')
            count[1]++;
        else if(str[i]>='0'&&str[i]<='9')
            count[2]++;
        else
            count[3]++;
    }
    for(int i=0;i<4;i++)
        cout<<count[i]<<endl;

    return 0;
}
