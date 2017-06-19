#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int a[]={5,2,3,1,4};
	int b[]={1,7,8};
	vector <int > v(8);
	vector<int>::iterator it;
	
	sort(a,a+5);
	sort(b,b+3);
	
	it=set_union(a,a+5,b,b+3,v.begin());
	v.resize(it-v.begin());
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<' ';
	}	
	cout<<endl;
}
