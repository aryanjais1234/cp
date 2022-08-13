#include<bits/stdc++.h>
using namespace std;
void reverse(int left,int right,int arr[]){
    if(left==right){
        return ;
    }
    swap(arr[left],arr[right]);
    reverse(left+1,right-1,arr);    
}

int main(){
    int arr[]={1,2,3,4,5};
    reverse(0,4,arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
}
