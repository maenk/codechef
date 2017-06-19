#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int T=0;T<t;T++)
	{
		float r,x1,x2,x3,y1,y2,y3;
		cin>>r;	
		cin>>x1>>y1;
		cin>>x2>>y2;
		cin>>x3>>y3;				
	float  dx12=x1-x2;
	float  dy12=y1-y2;
	float dx23=x2-x3;
	float  dy23=y2-y3;
	float  dx13=x1-x3;
	float  dy13=y1-y3;
	
	float  diff12=(dx12*dx12)+(dy12*dy12);
	float len12=sqrt(diff12);

	float  diff23=(dx23*dx23)+(dy23*dy23);
	float len23=sqrt(diff23);

	
	float diff13=(dx13*dx13)+(dy13*dy13);
	float len13=sqrt(diff13);
	
	if(len12<=r && len23<=r ||len12<=r&& len13<=r ||len23<=r&&len13<=r)
	{
		cout<<len12<<len23<<len13<<endl;
		cout<<"yes"<<endl;
	}
	else
	cout<<"no"<<endl;

	}
}
 	
