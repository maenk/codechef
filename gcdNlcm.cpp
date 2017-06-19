#include<iostream> 
#include<iomanip>
using namespace std;
int GCD(int n1,int n2)
{
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1=n1-n2;
		}
		else
		{
			n2=n2-n1;
		}
		
	}
	return n1;
}
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		long long int  q,p,g;
		cin>>q>>p;
		g=GCD(q,p);
		long long int l=(p*q)/g;
		cout<<g<<" "<<l<<endl;
	}
}
