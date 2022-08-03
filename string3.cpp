#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char s[100]="Today is a rainy day";

    char *ptr=strtok(s," ");    //return 1st token in the given string
    cout<<ptr<<endl;

    while(ptr!=NULL){
    ptr=strtok(NULL," ");
    cout<<ptr<<endl;
    }
}
