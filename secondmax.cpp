#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int T=0;T<t;T++)
	{
		int a[3],temp;
		cin>>a[0]>>a[1]>>a[2];
		int max=0;
		for(int i=0;i<3;i++)
		{
			if(max<a[i])
			{
				max=a[i];
				temp=i;
			}
		}
		a[temp]=-1;
		max=0;
		for(int i=0;i<3;i++)
		{
			if(max<a[i])
			{
				max=a[i];
				
			}
		}	
		cout<<max<<endl;		
			
	}
}

