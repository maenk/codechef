#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n,m;
		cin>>n>>m;
		int*a=new int[m];
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
		}
		sort(a,a+m);
		int*b=new int[n+1];
		for(int i=0;i<m;i++)
		{
			b[a[i]]=1;
		}
		int chef[n],asis[n],c[n],k=0;
		for(int i=1;i<=n;i++)
		{
		 if(b[i]!=1)
		 {
		 	c[k++]=i;
		 }	
		}
		for(int i=0;i<k;i=i+2)
		{
			cout<<c[i]<<' ';
		}
		cout<<endl;
			for(int i=1;i<k;i=i+2)
		{
			cout<<c[i]<<' ';
		}
		cout<<endl;
	}
}
