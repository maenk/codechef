#include<iostream>
using namespace std;
struct node
{
	int data;
 	node*next;
};

node* insert(node*head,int val)
{
	node* newnode=new node();
	newnode->data=val;
	newnode->next=NULL;
	node*ptr=head;
	if(head==NULL)
	{
		head=newnode;
		
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			
		}
		ptr->next=newnode;
	}
	return head;
}
node* swapNodes(node*head,int x,int y)
{
	node*ptrX=head;
	node*prevX=NULL;
	node*ptrY=head;
	node*prevY=NULL;
	while(ptrX && ptrX->data!=x)
	{
		prevX=ptrX;
		ptrX=ptrX->next;
	}
	while(ptrY && ptrY->data!=y)
	{
		prevY=ptrY;
		ptrY=ptrY->next;
	}
	if(prevX==NULL)
	{
		head=ptrY;
	}
	else
	{
		prevX->next=ptrY;
	}
	 if(prevY==NULL)
	{
		head=ptrX;
	}
	else
	{
		prevY->next=ptrX;
	}
	node*temp=ptrY->next;
	ptrY->next=ptrX->next;
	ptrX->next=temp;
	return head;
	
}
void display(node*head)
{
	node*ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		ptr=ptr->next;
		
	}
}
int main()
{
int T;
cin>>T;
for(int t=0;t<T;t++)
{
	int n;
	cin>>n;
	node*head=NULL;
	int val;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		head=insert(head,val);
	}
	cout<<"x & Y"<<endl;
	int x,y;
	cin>>x>>y;
	display(head);
	head=swapNodes(head,x,y);
	cout<<"after"<<endl;
	display(head);
	
	}
}
