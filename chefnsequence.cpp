#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
	int n1,n2,count=0	;
	cin>>n1;
	int*a=new int[n1];
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cin>>n2;
	int*b=new int[n2];
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n1;i++)
	{
		int j=0;
		if(a[i]==b[j])
		{
		count=1; 
			while(j<n2)
			{
				i++;j++;
				if(a[i]==b[j])
				{
					count++;
				}		
			}
		}
	}
	if(count==n2)
	{
		cout<<"Yes"<<endl;
	}	 
	else
	cout<<"No"<<endl;	
	}
}
