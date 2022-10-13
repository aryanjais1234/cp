#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string str,int i,int n){
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    return ispalindrome(str,i+1,n);
}
int main(){
    string str="aryan";
    int n=str.length();
    bool check=ispalindrome(str,0,n);
    if(check) cout<<"Palindrome";
    else cout<<"Not Palindrome";
}