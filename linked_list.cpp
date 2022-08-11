#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void takeinput(Node*&head,int data,int pos){    
    if(head==NULL){
        Node*temp=new Node(data);
        head=temp;
        return;
    }
    int count=0;
    Node*temp=head;
    while(count<pos){
        temp=temp->next;
        count++;
    }
    Node*newnode=new Node(data);
    temp->next=newnode;
    temp=newnode;
}

void print(Node*head){
    if(head==NULL){
        cout<<"Chutiye kuch to data dal de"<<endl;
        return;
    }
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node*head=NULL;
    Node*tail=NULL;
    int n;
    cout<<"What is the size of linked list ?"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int data;
        cin>>data;
        if(head==NULL){
            Node*temp=new Node(data);
            head=temp;
            tail=temp;
        }
        else{
            Node*temp=new Node(data);
            tail->next=temp;
            tail=tail->next;
        }
        i++;
    }
    cout<<"Linked list created"<<endl;
    print(head);
    return 0;
}