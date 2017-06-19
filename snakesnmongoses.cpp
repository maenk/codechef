#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		string n;
		cin>>n;
		int i=0,s=0,m=0;
		while(i<n.size()-1)
		{
			if(n[i]==n[i+1])
			{
				i++;
			}
			else
			{
				s--;
				i=i+2;
			}
		}
	for(int i=0;i<n.size();i++)
	{
		if(n[i]=='s')
		{
			s++;
		}
		if(n[i]=='m')
		{
			m++;
		}
		
	}
	if(s>m)
	{
		cout<<"snakes"<<endl;
	}
	else if(s<m)
	{
		cout<<"mongooses"<<endl;
	}
	else
	{
		cout<<"tie"<<endl;
	}
	}
}
