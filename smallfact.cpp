#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int T=0;T<t;T++)
	{
	int n,prod=1;
	cin>>n;
	while(n!=1)
	{
		prod*=n--;
	}
	cout<<prod<endl;
	}
}
 	
