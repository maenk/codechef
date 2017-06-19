#include<iostream> 
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n;
		cin>>n;
		int* a=new int[n];
		int b[100000];
		for(int i=0;i<100000;i++)
		{
		b[i]=0;
		}
		
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			b[a[i]]++;
		}
		for(int i=0;i<100000;i++)
		{
			if(b[i]%2!=0)
			{
				cout<<i<<endl;
			}
		}
}
}
