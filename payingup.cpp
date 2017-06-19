#include<iostream>
#include<algorithm>
using namespace std;
bool issubset(int *a,int n,int sum)
{
	if(sum==0)
	{
		return true;
	}
	if(n==0&&sum!=0)
	{
		return false;
	}
	else
	{
		return issubset(a,n-1,sum)||issubset(a,n-1,sum-a[n-1]);
	}
}
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		 int n,m;
		cin>>n>>m;
		int*a=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(issubset(a,n,m))
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}
