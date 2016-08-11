#include <iostream>

using  namespace std;

int main()
{
    int n;
    int weight[100],group[100];
    int dp1[10000],dp2[10000],dp3[10000];

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>weight[i];
    for(int i=0;i<n;i++)
        cin>>group[i];

    int count_weight = 0;
    for(int i=0;i<n;i++)
        count_weight += weight[i]*group[i];

    for(int i=0;i<=count_weight;i++)
    {
        if(i==0)
            dp1[0] = 1;
        else
            dp1[i] = 0;
        dp2[i] = 0;
        dp3[i] = 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=count_weight;j++) {
            dp2[j] = 0;
            dp3[i] = 0;
        }
        for(int j=1;j<=group[i];j++)
        {
            dp2[weight[i]*j] = 1;
        }

        for(int j=weight[i];j<=count_weight;j++)
        {
            for(int k=0;k<=count_weight;k++)
            {
                if(dp2[j]!=1)
                    break;
                if(dp1[k]==1)
                    dp3[j+k] = 1;
            }
        }
        for(int j=0;j<=count_weight;j++)
        {
            dp1[j] |= dp3[j];
        }

    }
    int count = 0;
    for(int i=0;i<=count_weight;i++)
        count += dp1[i];
    cout<<count;

    return 0;
}
