#include<iostream>
using namespace std;
int gcd( int n1,int n2)
{
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1-=n2;
			
			}	
		else {
			n2-=n1;
		}
	}
		return n1;
}
int  main()
{
	int t,g,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{


		cin>>n;
		
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		g=gcd(a[0],a[1]);
			
		for(int i=1;i<n-1;i++)
		{
			g=gcd(g,a[i]);
			}
		
		for(int i=0;i<n;i++)
		{
			cout<<a[i]/g<<' ';
		}
		cout<<endl;
	}
	
}
