#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> pq;

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        pq.push(a);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    //for small to big

    priority_queue<int , vector<int> , greater<int>>pq1;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        pq1.push(a);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    
}