#include<iostream> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		string s1;
		string s2;
		cin>>s1>>s2;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]==s2[i]||s1[i]=='?' || s2[i]=='?')
			{
				continue;
			}
			else
			{
				cout<<"No"<<endl;
				return 0;
			}
		}
		cout<<"Yes"<<endl;
			
	}	
}
