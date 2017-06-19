#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n,sum=0,prod=1,count=0;
		cin>>n;
		int*a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		sum=0;prod=0;
		for(int j=i;j<n;j++)
		{
			if(a[i]==a[j])
			{
				sum=a[j];
				prod=a[j];
			}
			else 
			{
				sum+=a[j];
				prod*=a[j];
			}
			if(sum==prod)
			{
				count++;
			}
		}
	}
	cout<<count<<endl;

}
}
	
