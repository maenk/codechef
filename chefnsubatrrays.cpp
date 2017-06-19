#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n;
		cin>>n;
		int*a=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int count=n;
	
		for(int i=0;i<n;i++)
		{
				int sum=a[i],prod=a[i];
			for(int j=i+1;j<n;j++)
			{
				sum+=a[j];
				prod*=a[j];
				if(sum==prod)
				{
				count++;
					
				}
			}
		}
		cout<<count<<endl;
	}
}
