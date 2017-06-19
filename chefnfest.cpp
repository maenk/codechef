#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
	int n,sum=0,count=0,flag=0;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		count++;
		flag=0;
		if(a[i]<=0)
		{
			sum+=count*a[i];
			count=0;
			flag=1;
		}
		else
		{
			sum+=a[i];
		}
	}
	if(flag==0)
	cout<<count*sum<<endl;
	else
	cout<<sum<<endl;
	
}
}
