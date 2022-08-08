#include<iostream>
#include<list>
using namespace std;

int main(){
    //how to create list
    //i
    list<int>l1;
    //insertion
    l1.push_back(1);
    for(auto i:l1){
        cout<<i<<" ";
    }
    cout<<endl;

    //ii
    list<int>l2{1,2,3,4,5};
    for(auto i:l2){
        cout<<i<<" ";
    }
    cout<<endl;

    //iii
    list<string>l3{"Aryan","Ankur","Tushar"};
    for(auto i:l3){
        cout<<i<<",";
    }
    cout<<endl;

    //sorting
    list<int>l4{2,1,4,3,5};
    for(auto i:l4){
        cout<<i<<" ";
    }
    cout<<endl;
    
    l4.sort();
    for(auto i:l4){
        cout<<i<<" ";
    }
    cout<<endl;

    //reverse
    l4.reverse();
    for(auto i:l4){
        cout<<i<<" ";
    }
    cout<<endl;

    l4.push_back(6);
    for(auto i:l4){
        cout<<i<<" ";
    }
    cout<<endl;
    l4.push_front(0);
    for(auto i:l4){
        cout<<i<<" ";
    }
    cout<<endl;


}