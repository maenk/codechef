#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
	int t,n,k=0,num=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{ num=0;
		k=0;
		cin>>n;
		int a[n];
		while(n!=0)
		{
		a[k++]=n%10;
		n=n/10;
		}
		
		for(int i=0;i<k;i++)
		{
			
			num+=a[i]*pow(10,k-(i+1));
		}
					cout<<num<<endl;

		}
}
