#include<algorithm>
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,2,3,3,3,4};
    int max=-999;
    int element;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        auto l=lower_bound(arr,arr+n,arr[i]);
        auto u=upper_bound(arr,arr+n,arr[i]);
        int occ=u-l;
        if(max<occ){
            max=occ;
            element=arr[i];
        }
    }
    cout<<"Max is:- "<<element;
    return 0;
}
