#include<iostream>
using namespace std;
int main()
{
int T;
cin>>T;
for(int t=0;t<T;t++)
{
int n;
cin>>n;
string a;
int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
for(int i=0;i<n;i++)
{

cin>>a;
if(a=="cakewalk")
flag1=1;
if(a=="simple")
flag2=1;
if(a=="easy");
flag3=1;
if(a=="easy-medium"||a=="medium")
flag4=1;
if(a=="medium-hard"||a=="hard")
flag5=1;
}

if(flag1==1&&flag2==1&&flag3==1&&flag4==1&&flag5==1)
    cout<<"Yes"<<endl;
else
    cout<<"No"<<endl;

}
}
