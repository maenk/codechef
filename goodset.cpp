#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int T=0;T<t;T++)
{
	int n,k=0,p=0;
	cin>>n;

	int a[500]={0};
	int *s=new int[n];
	for(int i=0;i<500;i++)
	{
		a[i]=i+1;
	}
	
	for(int i=0;i<n;i++)
	{
		if(i<2)
		{
			s[k]=a[i];
			k++;
						
		}
		/*else
		{
			p=s[i-1]+s[i-2];
			s[k]=a[p];
			k++;
			if(k==100)
			{
			break;
			}
		}	
		*/
		else
		{
			if(i==2)
			{
				s[k]=4;
				k++;
			}
			else
			{
				s[k]=s[k-1]+3;
				k++;    
			}
		}
		
	}
	for(int i=0;i<k;i++)
	{
		cout<<s[i]<<' ';
	}
	cout<<endl;
}
}

