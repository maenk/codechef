#include<iostream>
using namespace std;
int main()
{
	string s="                               ";
	//hello, my name is john";
	          
	string s1= " ";
	s=s1+s;
	cout<<s;
	if(s=="")
	cout<<0;
	
	int k=0;
	for(int i=1;i<s.length();i++)
	{
		if(s[i-1]!=' ' && s[i]==' ')
		{
			++k;
		}
		
	}
	cout<<k;
}
