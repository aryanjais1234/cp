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


Node* insert_at_pos(Node*&head,int data,int pos){
    if(head==NULL){
        return NULL;
    }

    if(pos==0){
        Node*temp=new Node(data);
        temp->next=head;
        head=temp;
        return head;
    }

    else if(pos==1){
        Node*temp=new Node(data);
        temp->next=head->next;
        head->next=temp;
        return head;
    }

    else{
        Node*newNode=insert_at_pos(head->next,data,pos-1);
        head->next=newNode;
    }
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
            tail=temp;
        }
        i++;
    }
    cout<<"Linked list created"<<endl;
    print(head);

    cout<<endl;

    int pos;
    cin>>pos;
    int data;
    cin>>data;
    insert_at_pos(head,data,pos);

    print(head);

    return 0;
}