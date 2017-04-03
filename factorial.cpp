#include<iostream>
using namespace std;
int main()
{
	int t,count=0,num;
	cin>>t;
	for(int i=0;i<t;i++)
	{ count=0;
		cin>>num;
		while(num!=0)
		{
		if(num>=5)
		{
			num=num/5;
			count+=num;
			
		}
		else break;
		}
		cout<<count<<endl;
	}
return 0;
}
