#include<iostream> 
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		int n1,n2,sum=0;
		cin>>n1>>n2;
		for(int i=n1;i<=n2;i++)
		{
			int s=i,a=0;
			while(s!=0)
			{
			
			 a=a*10+s%10;
			 s=s/10;
			}
			if(a==i)
			{
				sum+=a;
			}
		}
		cout<<sum<<endl;
	}
}
