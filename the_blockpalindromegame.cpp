#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		string s1;
		cin>>s1;
		stack <int> s;
		int flag=0;
		for(int i=0;i<s1.size();i++)
		{
			s.push(s1[i]);
		}
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]==s.top())
			{
			
				s.pop();
				
			}
			else
			{
				flag=1;
			}
			
		}
		if(s.size()==0)
		{
			cout<<"wins"<<endl;
		}
		else if(flag==1)
					cout<<"losses"<<endl;
	
	}
}
