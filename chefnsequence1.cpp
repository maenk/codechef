#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n1;
		cin>>n1;
		int *a=new int[n1];
		for(int i=0;i<n1;i++)
		{
			cin>>a[i];
		}
		
		int n2,count=0;
		cin>>n2;
		int *b=new int[n2];
		for(int i=0;i<n2;i++)
		{
			cin>>b[i];
		}
		int i,j;
		for(i=0,j=0;i<n1&&j<n2;i++)
		{
					if(a[i]==b[j])
					{
						j++;
					}
		}
			
		
	 if(j==n2)
	{
	cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	}
	}

