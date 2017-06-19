#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int T=0;T<t;T++)
	{
		string n;
		cin>>n;  
		if(n=="B"||n=="b")
		cout<<"BattleShip"<<endl;
		else if(n=="C"||n=="c")
		cout<<"Cruiser"<<endl;
		else if(n=="D"||n=="d")
		cout<<"Destroyer"<<endl;
		else if(n=="F"||n=="f")
		cout<<"Frigate"<<endl;	
	}
}
