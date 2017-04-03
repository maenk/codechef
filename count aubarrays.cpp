#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		long long  count=0;
		long long  *a=new long long [n];
		long long *b=new long long[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=1;
		}
		
		for(int i=1;i<n;i++)
		{
			if(a[i-1]<a[i])
			{
				b[i]=b[i-1]+1;
			}
		}
		for(int i=0;i<n;i++){
			count+=b[i];
		}
	cout<<count<<endl;

	}
}
