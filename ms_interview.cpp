#include <iostream>
using namespace std;
//1 -> 2 -> 3 -> 1 -> 5 -> 4 -> 4 -> 10 -> 7
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void max_dist(Node*head){
    Node*temp=head->next;
    Node*prev=head;
    int last_index=0;
    int i=1;
    int ans;
    int max=-999;
    int curr_index=0;
    while(temp!=NULL){
        Node*next=temp->next;
        if(prev->data<temp->data && temp->data>next->data){
            cout<<"Peak element:- "<<temp->data<<endl;
            curr_index=i;
            ans=curr_index-last_index-1;
            last_index=i;
            if(max<ans) max=ans;
        }
        prev->next=temp;
        prev=prev->next;
        temp=temp->next;
        i++;
    }
    cout<<"Highest max between all peak elements:- "<<max;
}
void print(Node*head){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node * head=new Node(1);
    Node * head2=new Node(2);
    head->next=head2;
    Node * head3=new Node(3);
    head2->next=head3;
    Node * head4=new Node(1);
    head3->next=head4;
    Node * head5=new Node(5);
    head4->next=head5;
    Node * head6=new Node(4);
    head5->next=head6;
    Node * head7=new Node(4);
    head6->next=head7;
    Node * head8=new Node(10);
    head7->next=head8;
    Node * head9=new Node(7);
    head8->next=head9;
    print(head);
    max_dist(head);
    return 0;
}