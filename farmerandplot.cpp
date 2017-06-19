#include<iostream> 
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int l,b;
		cin>>l>>b;
		int n1=l,n2=b;
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
		cout<<(l/n1)*(b/n1)<<endl;
	}

}
