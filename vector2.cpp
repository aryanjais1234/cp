#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    cout<<v.front()<<endl; // front() is used for find a first element of vector
    cout<<v.back()<<endl; // back() is used for getting last element

    v.push_back(0);
    cout<<v.back()<<endl;
    
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}