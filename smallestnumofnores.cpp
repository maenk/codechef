#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int T=0;T<t;T++)
	{
	int n,curr=0;
	cin>>n;
	int a[6]={1,2,5,10,50,100};
	
	for(int i=5;i>=0;i--)
	{
		if(n>=a[i])
		{
			curr+=n/a[i];
			n=n%a[i];
		}
	}
	cout<<curr<<endl;
	}
}
