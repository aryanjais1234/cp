#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={20,30,40,50,100,1100};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    //search in sorted array
    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present";
    }
    else cout<<"Not Present";

    //get the index
    //lower_bound(s,e,key) and upper_key(s,e,key)

    auto it = lower_bound(arr,arr+n,key);
}
