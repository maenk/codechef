#include<iostream>
using namespace std;
int main()
{
	int t,p,sum=0;
	cin>>t;
	int a[12];
	for(int i=0;i<t;i++)
	{
		sum=0;
	cin>>p;
	a[0]=p;
	for(int i=1;i<12;i++)
	{
		a[i]=a[i-1]/2;
		a[i-1]=a[i-1]%2;	
	}
	for(int i=0;i<12;i++)
	{
		sum+=a[i];
	}
	cout<<sum<<endl;
}
}
