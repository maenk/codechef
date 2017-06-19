#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n,max=0,s=0,c=0;
		cin>>n;
		int*l=new int[n];
		int*r=new int[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>l[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>r[i];
		}
		for(int i=0;i<n;i++)
		{
			if(max<l[i]*r[i])
			{
				max=l[i]*r[i];
				c=r[i];
				s=i;
			}
			else if(max==l[i]*r[i])
			{
				if(c<r[i])
				{
				
				c=r[i];
				s=i;
				}
			}
		}
		
		cout<<s+1<<endl;
	}
}
