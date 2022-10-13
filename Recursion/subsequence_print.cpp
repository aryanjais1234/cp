#include<bits/stdc++.h>
using namespace std;

void print_sub(int *arr,vector<int>s,int n,int i){
    if(i>=n){
        for(auto it:s){
            cout<<it<<",";
        }
        cout<<endl;
        return;
    }
    s.push_back(arr[i]);
    print_sub(arr,s,n,i+1);
    s.pop_back();
    print_sub(arr,s,n,i+1);
}

int main(){
    int arr[]={3,1,2};
    vector<int>s;
    print_sub(arr,s,3,0);
}