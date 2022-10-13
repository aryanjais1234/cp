#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "aryan";
    stack<int>s;

    for(auto i:str){
        s.push(i);
    }

    string ans="";

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    cout<<ans<<endl;
}