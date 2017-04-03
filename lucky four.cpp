#include<iostream>
using namespace std;
int  main()
{
	int t;
	long long n,count=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		count=0;
		cin>>n;
		while(n!=0)
		{
			if(n%10==4)
			{
				count++;
			}
			n/=10;
		}
	cout<<count<<endl;
	}
	
}
