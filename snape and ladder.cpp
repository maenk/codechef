#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	double B,LS,RS;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>B>>LS;
		cout<<fixed<<setprecision(5)<<sqrt((LS*LS)-(B*B));
		cout<<"  "<<fixed<<setprecision(5)<<sqrt((LS*LS)+(B*B))<<endl;
		}
}
