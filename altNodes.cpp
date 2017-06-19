#include<iostream>
using namespace std;
struct node
{
	int data;
	node*next;
};
node*head=NULL;

void insert(int val)
{
	node*ptr=head;
	node* newnode= new node;
	newnode->data=val;
	newnode->next=NULL;
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
}
void display(node*head)
{
	node*ptr=head;
	while(ptr!=NULL)
	{
		cout<<" --> "<<ptr->data;
			ptr=ptr->next;
	}
	cout<<endl;
	

}
void AltNodes()
{
	node*ptr1=head;
	node*ptr2=head->next;
	node*a=ptr1;
	node*b=ptr2;
	
	while(ptr1!=NULL||ptr2!=NULL)
	{
	ptr1->next=ptr2->next;
	
		if(ptr1!=NULL||ptr1->next!=NULL)
		ptr1=ptr1->next->next;

	ptr2->next=ptr1->next;
	
		if(ptr2!=NULL||ptr2->next!=NULL)
			ptr2=ptr2->next->next;
			display(a);
			display(b);
			
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		insert(i);
		
	}
	display(head);
	AltNodes();
return 0;	
}
