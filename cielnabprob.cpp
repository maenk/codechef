#include<iostream>
using namespace std;
int main()
{
int a,b,sb;
cin>>a>>b;
	sb=a-b;
	if(sb%10==9)
	{
		sb=sb-1;
	}
	else
	{
		sb=sb+1;
	}
	cout<<sb<<endl;
}

