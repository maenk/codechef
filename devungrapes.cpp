#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
	
long long int c,d,n,k,sum=0,count=0;
cin>>n>>k;
long long int*a=new long long int[n];

for(int i=0;i<n;i++)
{
	cin>>a[i];	
}
for(int i=0;i<n;i++)
{
	int temp=a[i]/k;
	c=a[i]%k;
	d=(a[i]+c)%k;
	//d=k-c;
	if(temp==0||c>d)
	{
		c=c-d;
	//	count=count+d;
	}
	//else
	//count=count+c;
	sum+=c;
}
cout<<sum<<endl;
}
}
