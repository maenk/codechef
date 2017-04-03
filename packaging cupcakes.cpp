#include<iostream>
using namespace std;
int main()
{
	int t,n,ans;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		if(n%2==0)
		{
			ans=(n/2)+1;
		}
		else
		{
			ans=(n+1)/2;
		}
		
	cout<<ans<<endl;
	}
}
