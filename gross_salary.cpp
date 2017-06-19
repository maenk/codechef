#include<iostream> 
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		double bs,DA,HRA,gs=0;
		cin>>bs;
		if(bs<1500)
		{
				HRA=0.1*bs;
				DA=0.9*bs;
		}
		else
		{
			HRA=500;
			DA=0.98*bs;
		}
		gs=bs+HRA+DA;
		cout<<gs<<endl;
	}
}
