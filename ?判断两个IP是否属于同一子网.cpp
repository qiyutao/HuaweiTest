#include <iostream>
#include <string.h>

using namespace std;

void ip_to_num(char ip[],int num1[],bool isMask)
{
    char *result = strtok(ip,".");
    if(result==NULL)
        num1[0] = -1;
    else
    {
        num1[0] = atoi(result)*256*256*256;
        if(isMask)
        {
            if(atoi(result)!=255)
            {
                num1[0] = -1;
            }

        }
        else
        {
            if(atoi(result)<0||atoi(result)>255)
                num1[0] = -1;
        }
    }


    result = strtok(NULL,".");
    if(result==NULL)
        num1[0] = -1;
    else
    {
        if(isMask)
        {
            if(atoi(result)!=255&&atoi(result)!=0)
                num1[0] = -1;
        }
        else
        {
            if(atoi(result)<0||atoi(result)>255)
                num1[0] = -1;
        }
        int b=atoi(result);
        num1[1] = b*256*256;
    }

    result = strtok(NULL,".");
    if(result==NULL)
    {
        if(isMask)
            num1[2]=0;
        else
        num1[0] = -1;
    }

    else
    {
        if(isMask)
        {
            if(atoi(result)!=255&&atoi(result)!=0)
                num1[0] = -1;
        }
        else
        {
            if(atoi(result)<0||atoi(result)>255)
                num1[0] = -1;
        }
        num1[2] = atoi(result)*256;
    }

    result = strtok(NULL,".");
    if(result==NULL)
    {
        if(isMask)
            num1[3]=0;
        else
            num1[0] = -1;
    }
    else {
        if (isMask) {
            if (atoi(result) != 0)
                num1[0] = -1;
        }
        else {
            if (atoi(result) < 0 || atoi(result) > 255)
                num1[0] = -1;
        }
        num1[3] = atoi(result);
    }

}

int main() {
    char mask[80],ip1[80],ip2[80];
    int num_mask[4],num_ip1[4],num_ip2[4];

    while(cin>>mask>>ip1>>ip2){

    ip_to_num(mask,num_mask,true);
    ip_to_num(ip1,num_ip1, false);
    ip_to_num(ip2,num_ip2, false);

    if(num_ip1[0]==-1||num_ip2[0]==-1||num_mask[0]==-1)
        cout<<1;
    else
    {
        bool flag = true;
        if(num_ip1[0]!=num_ip2[0])
            flag = false;
        if(num_mask[1]==255&&num_ip1[1]!=num_ip2[1])
            flag = false;
        if(num_mask[2]==255&&num_ip1[2]!=num_ip2[2])
            flag = false;
        if(flag)
            cout<<0;
        else
            cout<<2;
        
    }
        cout<<endl;
    }

    return 0;
}
