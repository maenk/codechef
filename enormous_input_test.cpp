#include<iostream>
using namespace std;
int main()
{
	int n,k,i,num,count=0;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	{
		cin>>num;
		if(num%k==0)
		{
			count++;
			
		}
	}
	cout<<count;
}
