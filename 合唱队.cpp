#include <iostream>

using namespace std;

int main()
{
    int num;
    while(cin>>num)
    {
        int people[num],fore[num],back[num];

    for(int i=0;i<num;i++)
        cin>>people[i];

    for(int i=0;i<num;i++)
    {
        fore[i] = 1;
        for(int j=0;j<i;j++)
        {

            if(people[j]<people[i]&&fore[i]<fore[j]+1)
                fore[i] = fore[j]+1;
        }
    }

    for(int i=num-1;i>=0;i--)
    {
        back[i] = 1;
        for(int j=num-1;j>i;j--)
        {

            if(people[j]<people[i]&&back[i]<back[j]+1)
                back[i] = back[j]+1;
        }
    }

    int total = 0;
    //int id;

    for(int i=0;i<num;i++)
    {
        if(fore[i]+back[i]>total)
        {
            total = fore[i]+back[i];
        }
    }

    cout<<num-(total-1);
    }
    


    return 0;
}
