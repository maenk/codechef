#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		string s;
		int c1=0,c2=0;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i+1]!=s[i]&&s[i]=='U')
			{
				c1++;
			}
			if(s[i+1]!=s[i]&&s[i]=='D')
			{
				c2++;
			}
		}
		
			if(c1<c2)
			{
				cout<<c1<<endl;
			}	
			else
			cout<<c2<<endl;
				
	
	}
}
