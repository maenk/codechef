#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		 int n,k;
		cin>>n;
		int*a=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>k;
		int pos=a[k-1];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(a[i]==pos)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
}
