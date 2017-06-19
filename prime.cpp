#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int T=0;T<t;T++)
{
int n,flag=0;
cin>>n;
for(int i=2;i<n/2;i++)
{
	if(n%i==0)
	{
	flag=1;
	break;
	}
}
if(flag==0)
{
cout<<"yes"<<endl;
}
else
cout<<"no"<<endl;
}
}
