#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
string a;
cin>>a;
int count[]={0,0},min=a[0];
for(int i=0;i<a.size();i++)			
	{
	count[a[i]-'a']++;
	}
	for(int i=0;i<2;i++)
	{
		if(min>count[i])
		{
			min=count[i];
		}
	}
	cout<<min<<endl;
}
}
