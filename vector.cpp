#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int>v(5,10);
    int sum=0;
    for(int x:v){
        sum+=x;
    }
    cout<<sum<<endl;

    vector<int>::iterator it;
    for(it=v.begin();it<v.end();it++){
        cout<<*(it)<<endl;
    }

    

}