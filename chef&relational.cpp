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
		if(q>p)
		{
			cout<<">"<<endl;
			
		}
		else if(q<p)
		{
			cout<<"<"<<endl;
			
		}
		else if(q==p)
		{
			cout<<"="<<endl;
			
		}
	
	
	}
}
