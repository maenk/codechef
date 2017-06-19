#include<iostream> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n,m,k,res ;
		cin>>n>>m>>k;
		res=n-m <0? m-n:n-m;
		if(res-k>0)
		{
			cout<<(res-k)<<endl;
		}
		else
		cout<<0<<endl;
	}
}

