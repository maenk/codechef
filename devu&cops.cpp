#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n,x,y,p=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>x>>y;
			p=p^i;
		}
		cout<<p<<endl;
			
	
	}
}
