#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top;

    stack(int size){
        this->size=size;
        arr =new int[size];
        top=-1;
    }

    //methods

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }

        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    void pop(){
        if(top!=-1){
            cout<<"Popped Element:- "<<arr[top]<<endl;
            top--;
        }

        else{
            cout<<"Stack UnderFlow"<<endl;
        }
    }

    int peek(){
        if(top!=-1){
            return arr[top]; 
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }

        else{
            return false;
        }
    }
};

int main(){
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<s.peek()<<endl;
    for(int i=0;s.isEmpty()!=1;i++){
        s.pop();
    }
}