#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int T;
cin>>T;
for(int t=0;t<T;t++)
{
int n,count=1;
cin>>n;
int*a=new int[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n-1;i++)
{
if(a[i+1]>a[i])
{
count++;
}
}
cout<<count<<endl;
}
}
