#include<iostream>
using namespace std;
int main()
{
	int t;
	while(true)
	{
	cin>>t;
	if(t==0)
	{
		break;
	}
	else
	{
		int count=0;
		int*b=new int[t];
		int *a=new int[t];
		for(int i=0;i<t;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<t;i++)
		{
			b[a[i]-1]=i+1;
		}
		for(int i=0;i<t;i++)
		{
			if(a[i]==b[i])
			{
				count++;
			}
		}
		if(count==t)
		{
			cout<<"ambiguous"<<endl;
		}
		else
		{
			cout<<"not ambiguous"<<endl;
		}
	}
}
}
	
	

