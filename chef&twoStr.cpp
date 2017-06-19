#include<iostream> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		string s;
		int t,max=0,sum=0;
		int *c=new int[26];
		for(int i=0;i<26;i++)
		c[i]=0;
		
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			c[s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
				if(max<c[i])
				{
					max=c[i];
					t=i;
				}
		}
		for(int i=0;i<26;i++)
		{
			if(i!=t)
			{
				sum+=c[i];
			}
		}
		if(sum==max)
		{
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;	
	}	
} 
