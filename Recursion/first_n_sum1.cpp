#include<iostream>
using namespace std;

int n_sum(int n,int sum){
    if(n<1){
        return sum;
    }
    return n_sum(n-1,sum+n);
}

int main(){
    int n;
    cin>>n;
    int ans=n_sum(n,0);
    cout<<"The sum of first "<<n<<" numbers:- "<<ans<<endl;
}