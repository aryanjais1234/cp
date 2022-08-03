#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    return a.length()<b.length();
}
int main() {
    int n;
    cin>>n;
    cin.get();
    string s[100];
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;;
    }

    sort(s,s+n);

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;;
    }


}
