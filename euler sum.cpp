#include<iostream>
using namespace std;
int main()
{
	unsigned long long int n;
	unsigned long long int sum=0;
	cin>>n;
	double e=2.71828152557319224769116772222332656383514404296875;
/*	for(int i=1;i<=n;i++)
	{
	sum+=e*i;	
	}
*/	cout<<(e*(n*(n+1)/2))<<endl;
	//	cout<<sum<<endl;

}
