#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	for (int T=0;T<t;T++)
	{
	int n,min1=9999999,min2=min1;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(min1>a[i])
		{
			min2=min1;
			min1=a[i];
		}
		else if(min2>a[i]&&a[i]!=min1)
		{
			min2=a[i];
			
		}
	}
	cout<<min1+min2;
	}
	}

