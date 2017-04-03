#include<iostream>
using namespace std;
int main()
{
	long long   fact=1,t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		fact=n;
		while(n!=1)
		{
			fact*=n-1;
			n--;
		}
		cout<<fact<<endl;
	}
} 
