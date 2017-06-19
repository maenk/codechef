#include<iostream>
using namespace std;
int main()
{
	int a[7]={6,6,6,4,5,6,4};
	int flag[7]={0,0,0,0,0,0,0};
	int count[7]={0,0,0,0,0,0,0};
	for(int i=0;i<7;i++)
	{
		count[i]++;
		for(int j=i+1;j<7;j++)
		{
			if(a[i]==a[j]&&flag[j]==0)
			{
				flag[j]=1;
				count[i]++;
				
			}
		}
	}
for(int i=0;i<7;i++)
{
	if(flag[i]==0&&count[i]>7/2)
	{
		cout<<a[i];
	}
}
}
