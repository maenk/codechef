#include<iostream>
#include<stack>
using namespace std;
int main()
{
	
	int t;char a;
	string str;
	 stack<char>s;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>str;
	 	for(int i=0;i<str.size();i++)
	 	{
	 	 if(str[i]=='('||str[i]=='+'||str[i]=='-'||str[i]=='^'||str[i]=='*'||str[i]=='/')
		  {
		  	
		  	if((s.size()!=0 )&& (s.top()=='*'||s.top()=='^'||s.top()=='/' )&& (str[i]=='-'||str[i]=='+'))
		  	{
				while(s.top()!='(')
				{	
					cout<<s.top();
					s.pop();
					
				}
				s.pop();
				s.push(str[i]);
			}
			
		 	s.push(str[i]);
		  }
		  else if(str[i]>='a'&&str[i]<='z')
		  {
		  	cout<<str[i];
		   } 
		   else if(str[i]==')')
		   {
		   	while(s.top()!='(')
		   	{
		   		cout<<s.top();
		   		s.pop();
		   	}
			s.pop();
		  }
		}
		cout<<endl;
	}
}	
