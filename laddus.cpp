#include<iostream>
using namespace std;
int main()
{
int  T;
cin>>T;
for(int t=0;t<T;t++)
{
    int laddus=0;
int n;
cin>>n;
string origin;
cin>>origin;
string activity;
for(int i=0;i<n;i++)
{
cin>>activity;
if(activity=="CONTEST_WON")
{
int rank;
cin>>rank;
if(rank>20)
laddus+=300;
else
laddus+=320-rank;
}
else if(activity=="TOP_CONTRIBUTOR")
{
laddus+=300;
}
else if(activity=="BUG_FOUND")
{
    int severity;
    cin>>severity;
    laddus+=severity;
}
else if(activity=="CONTEST_HOSTED")
{
    laddus+=50;
}

}
if(origin=="INDIAN")
{
    int p=laddus/200;
    cout<<p<<endl;
}
else if(origin=="NON_INDIAN")
{
    int p=laddus/400;
    cout<<p<<endl;
}
}
}
