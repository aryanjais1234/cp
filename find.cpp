#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={3,1,4,5,2};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);
    cout<<*(it)<<endl;
    int index=it-arr;
    if(index==n){
        cout<<key<<" not present";
    }
    else{
        cout<<"Present at index "<<index;
    }
}
