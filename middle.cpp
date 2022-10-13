#include<iostream>
using namespace std;
class node {
	public:
		int data;
		node*next;
		
		node(int val)
		{
			data=val;
			next=NULL;
		}
};
void insertathead(node*&head,int d)
{
	node*temp=new node(d);
	temp->next=head;
	head=temp;

}
int print(node*head)
{
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	cout<<endl;
	
}
void reverse(node*&head , node* curr , node* prev)
{
	if(curr==NULL)
	{
		head =prev;
		return;
		
	}
 node*forward=curr->next;
 reverse(head,forward,curr);
 curr->next=prev;
 
}
node* reverselist(node* head)
 {
    node*curr=head;
 	node*prev=NULL;
 	reverse(head,curr,prev);
 	return head;
/*
	if(head== NULL || head->next== NULL)
	{
		return head;
	}
		node*prev=NULL;
	node*curr=head;

	node*forward= NULL;
	
	while(curr!=NULL)
	{
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	
	}
	return prev;
	*/
}

// finding the middle element //

int getlen(node*&head){
    node*temp=head;
	int len=0;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	return len;
}
node* middle(node*&head)
{
	int len=getlen(head);
	int ans=len/2;
	
node*temp=head;
int count=0;
while(count<ans)
{
	temp=temp->next;
	count++;
}
return temp;
}


int main()
{
	node*n=new node(70);
	node*head=n;
	insertathead(head,60);
	insertathead(head,50);
	insertathead(head,40);
	insertathead(head,30);
	insertathead(head,20);
	insertathead(head,10);
		//print(head);
		
	//print(reverselist(head));

    node*temp=middle(head);
    cout<<temp->data;
	

	return 0;
	

	
}