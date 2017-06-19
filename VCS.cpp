#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
	int n,m,k,p,q,count1=0,count=0;
	cin>>n>>m>>k;
	int*a=new int[n];
	int*b=new int[n];
	for(int i=0;i<n;i++)
	{
	a[i]=0;
	}
	for(int i=0;i<n;i++)
	{
	b[i]=0;
	}
	
	for(int i=0;i<m;i++)
	{
		cin>>p;
		a[p-1]=1;
	}
	for(int i=0;i<k;i++)
	{
		cin>>q;
		b[q-1]=1;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i]&& a[i]==1)
		{
			count1++;
		}
		else if(a[i]==b[i]&& a[i]==0)
		{
			count++;
		}
	} 
cout<<count1<<" "<<count<<endl;
	
}
}
