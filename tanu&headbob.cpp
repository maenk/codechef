#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int T=0;T<t;T++)
{
int n,countN=0;
cin>>n;
string a;
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n;i++)
{
	if(a[i]=='N')
	{
		countN++;
	}
	if(a[i]=='Y')
	{
		cout<<"NOT INDIAN"<<endl;
		break;
		
	}
	if(a[i]=='I')
	{
		cout<<"INDIAN"<<endl;
		break;
	}
}
if(countN==n)
{
	cout<<"NOT SURE"<<endl;
}

}
}

