#include<iostream>
using namespace std;
void quicksort(int *a,int beg,int end)
{
	int i=beg;
	int j=end;
	int mid=(beg+end)/2;
	int pivot=a[mid];
while(i<j)
{
	while(a[i]<pivot)
	{
		i++;
	}
	while(a[j]>pivot)
	{
		j--;
	}
	if(i<=j)
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}	
}
	if(beg<j)
	quicksort(a,beg,j);
	if(i<end)
	quicksort(a,mid+1,end);	
}

	
int main()
{
	int i,n;
	cin>>n;
	int *a=new int [n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<endl;
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
}
