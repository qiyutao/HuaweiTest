#include <iostream>
#include <cstring>

using namespace std;

void isIp(char *ip,int count[])
{
	char *tok = NULL;
	int ip_num[4];
	tok = strtok(ip,".");
	if(tok==NULL)
	{
		count[5]++;
		return ;
	}
	ip_num[0] = atoi(tok);
	tok = strtok(NULL,".");
	if(tok==NULL)
	{
		count[5]++;
		return ;
	}
	ip_num[1] = atoi(tok);
	if(ip_num[1]>255||ip_num[1]<0)
	{
		count[5]++;
		return ;
	}
	tok = strtok(NULL,".");
	if(tok==NULL)
	{
		count[5]++;
		return ;
	}
	ip_num[2] = atoi(tok);
	if(ip_num[2]>255||ip_num[2]<0)
	{
		count[5]++;
		return ;
	}
	tok = strtok(NULL,".");
	if(tok==NULL)
	{
		count[5]++;
		return ;
	}
	ip_num[3] = atoi(tok);
	if(ip_num[3]>255||ip_num[3]<0)
	{
		count[5]++;
		return ;
	}
	
	if(ip_num[0]>=1&&ip_num[0]<=126)
	{
		if(ip_num[0]==10)
		count[6]++;
		count[0]++;
		return ;
	}
	if(ip_num[0]>=128&&ip_num[0]<=191)
	{
		if(ip_num[0]==172&&(ip_num[1]>=16&&ip_num[1]<=31&&
		(ip_num[2]>=0&&ip_num[2]<=255&&ip_num[3]>=0&&ip_num[3]<=255)))
		count[6]++;
		count[1]++;
		return ;
	}
	if(ip_num[0]>=192&&ip_num[0]<=223)
	{
		if(ip_num[0]==192&&(ip_num[1]==168&&
		(ip_num[2]>=0&&ip_num[2]<=255&&ip_num[3]>=0&&ip_num[3]<=255)))
		count[6]++;
		count[2]++;
		return ;
	}
	if(ip_num[0]>=224&&ip_num[0]<=239)
	{
		count[3]++;
		return ;
	}
	if(ip_num[0]>=240&&ip_num[0]<=255)
	{
		count[4]++;
		return ;
	}
}

bool isMask(char *mask,int count[])
{
	char *tok = NULL;
	int mask_num[4];
	tok = strtok(mask,".");
	if(tok==NULL)
	{
		count[5]++;
		return false;
	}
	mask_num[0] = atoi(tok);
	tok = strtok(NULL,".");
	if(tok==NULL)
	{
		count[5]++;
		return false;
	}
	mask_num[1] = atoi(tok);
	tok = strtok(NULL,".");
	if(tok==NULL)
	{
		count[5]++;
		return false;
	}
	mask_num[2] = atoi(tok);
	tok = strtok(NULL,".");
	if(tok==NULL)
	{
		count[5]++;
		return false;
	}
	mask_num[3] = atoi(tok);
	
	if(mask_num[1]==0&&mask_num[2]==0&&
	mask_num[3]==0)
	{
		if(mask_num[0]==0x80||mask_num[0]==0||
		mask_num[0]==0xc0||mask_num[0]==0xe0||
		mask_num[0]==0xf0||mask_num[0]==0xf8||
		mask_num[0]==0xfc||mask_num[0]==0xfe||
		mask_num[0]==0xff)
			return true;
		else
		{
			count[5]++;
			return false;
		}
	}
	if(mask_num[0]==255&&mask_num[2]==0&&
	mask_num[3]==0)
	{
		if(mask_num[1]==0x80||mask_num[1]==0||
		mask_num[1]==0xc0||mask_num[1]==0xe0||
		mask_num[1]==0xf0||mask_num[1]==0xf8||
		mask_num[1]==0xfc||mask_num[1]==0xfe||
		mask_num[1]==0xff)
			return true;
		else
		{
			count[5]++;
			return false;
		}
	}
	if(mask_num[0]==255&&mask_num[1]==255&&
	mask_num[3]==0)
	{
	if(mask_num[2]==0x80||mask_num[2]==0||
		mask_num[2]==0xc0||mask_num[2]==0xe0||
		mask_num[2]==0xf0||mask_num[2]==0xf8||
		mask_num[2]==0xfc||mask_num[2]==0xfe||
		mask_num[2]==0xff)
			return true;
		else
		{
			count[5]++;
			return false;
		}
	}
	if(mask_num[0]==255&&mask_num[1]==255&&
	mask_num[2]==255)
	{
		if(mask_num[3]==0x80||mask_num[3]==0||
		mask_num[3]==0xc0||mask_num[3]==0xe0||
		mask_num[3]==0xf0||mask_num[3]==0xf8||
		mask_num[3]==0xfc||mask_num[3]==0xfe||
		mask_num[3]==0xff)
			return true;
		else
		{
			count[5]++;
			return false;
		}
	}
	count[5]++;
	return false;
}

int main(int argc, char *argv[])
{
	int count[7];
	memset(count,0,7*sizeof(count)); 
	
	char ip_mask[80];
	while(cin>>ip_mask)
	{
		char ip[80];
		char mask[80];
		
		char *tok = NULL;
		tok = strtok(ip_mask,"~");
		strcpy(ip,tok);
		tok = strtok(NULL,"~");
		strcpy(mask,tok);
		
		if(isMask(mask,count))
		isIp(ip,count);
	}
	
	for(int i=0;i<6;i++)
		cout<<count[i]<<" ";
	cout<<count[6];
	
	return 0;
}
