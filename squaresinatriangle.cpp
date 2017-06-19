#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n;
		cin>>n;  
		
		n=n-2;
		n=n/2;
		cout<<(n*(n+1))/2<<endl;
	}
}
