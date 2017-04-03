#include<iostream>
using namespace std;
int  main()
{
	int t,n,k=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		k=0;
		cin>>n;
		int a[n];
		while(n!=0)
		{
		a[k++]=n%10;
		n=n/10;
		}
		cout<<a[0]+a[k-1]<<endl;
	}
	
}
