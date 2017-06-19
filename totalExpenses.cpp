#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		double q,p;
		cin>>q>>p;
		if(q>1000)
		{
			cout<<setprecision(6)<<fixed<<((q*p)-(0.1*(q*p)))<<endl;
			
		}
		else
		{
			cout<<setprecision(6)<<fixed<<q*p<<endl;
		}
	}
}
