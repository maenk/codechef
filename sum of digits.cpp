#include<iostream>
using namespace std;
int main()
{
	int t,sum=0,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		sum=0;
		cin>>n;
		while(n>0)
		{
			sum+=n%10;
			n=n/10;
		}
		cout<<sum<<endl;
	}
}
