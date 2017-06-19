#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int T=0;T<t;T++)
{
	long long sum=0,x,y;
	cin>>x>>y;

	long long tot=1+x+y;
	sum=(tot*(tot+1))/2;
	cout<<sum-y<<endl;
	
}
}

