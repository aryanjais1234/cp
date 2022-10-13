#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class stack{
    public:
    Node*head=NULL;
    int size=1;
    void push(int data){
        Node*temp=new Node(data);
        temp->next=head;
        head=temp;
        size++;
    }

    void pop(){
        if(size==0){
            cout<<"Stack is already empty";
            return;
        }
        int data=head->data;
        Node*temp=head;
        head=head->next;
        delete temp;
        size--;
        cout<<"Popped element:- "<<data<<endl;
    }

    int peek(){
        if(size==0){
            cout<<"Stack is already empty";
            return -1;
        }
        return head->data;
    }

    bool isEmpty(){
        if(size==0){
            return true;
        }
        else{
            false;
        }
    }
};

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.isEmpty()){
        s.pop();
    }
}