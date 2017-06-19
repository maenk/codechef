#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int max=0,n,k;
		cin>>n>>k;
		for(int i=1;i<=k;i++)
		{
			if(max<n%i)
			{
				max=n%i;
			}
		}
		cout<<max<<endl;  
			
	}
}
