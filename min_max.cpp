#include<iostream> 
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		long long int n;
		cin>>n;
		long long int* a=new long long int[n];
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		}
		long long int min=a[0];
		for(int i=0;i<n;i++)
		{
		if(min>a[i])
		{
			min=a[i];
			
		}
		}

		long long int c=min*(n-1);
		cout<<c<<endl;
	}
}

