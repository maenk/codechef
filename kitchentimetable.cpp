#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n,time=0,count=0;
		cin>>n;
		int*a=new int[n];
		int*b=new int[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(int i=0;i<n;i++)
		{
			time=time+b[i];
			if(a[i]>=time)
			{
				count++;
			}
			
		}
		cout<<count<<endl;
	}
}
