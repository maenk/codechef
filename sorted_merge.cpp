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
node* SortedMerge(node* head1,node*head2)
	{
		node*result=NULL;
		node*ptr;
		node*ptr1=head1;
		node*ptr2=head2;
		if(head1==NULL)
		{
			
			return head2;
		}	
		else if(head2==NULL)
		{
			return head1;
		}
		else
		{
			while(ptr1!=NULL&&ptr2!=NULL)
			{
				if(ptr1->data<=ptr2->data)
				{
					if(result==NULL)
					{
						result=ptr1;
						ptr1=ptr1->next;
						ptr=result;
					}
					else
					{
						ptr->next=ptr1;
						ptr1=ptr1->next;
						ptr=ptr->next;
					}
				}
				else
				{
					if(result==NULL)
					{
						result=ptr2;
						ptr2=ptr2->next;
						ptr=result;
					}
					else
					{
						ptr->next=ptr2;
						ptr2=ptr2->next;
						ptr=ptr->next;
					}
				}
			
			}
			while(ptr1!=NULL)
			{
						ptr->next=ptr1;
						ptr1=ptr1->next;
						ptr=ptr->next;
			}
			while(ptr2!=NULL)
			{
						ptr->next=ptr2;
						ptr2=ptr2->next;
						ptr=ptr->next;
			}
			
		
		}
		
		ptr->next=NULL;
		return result;
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
	int n1,n2;
	cin>>n1;
	cin>>n2;
	node*head1=NULL;
	node*head2=NULL;
	node*result=NULL;
	int val;
	for(int i=0;i<n1;i++)
	{
		cin>>val;
		head1=insert(head1,val);
	}
	display(head1);
cout<<endl<<endl;	
	for(int i=0;i<n2;i++)
	{
		cin>>val;
		head2=insert(head2,val);
	}
	display(head2);
	cout<<endl<<endl;
	result=SortedMerge(head1,head2);
	display(result);
	
	}
}
