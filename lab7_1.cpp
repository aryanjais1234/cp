// WAP for activity selection problem using greedy approach


#include <stdio.h>

void select(int s[],int f[],int n){
    int i=0;
    printf("%d ",i);
    for(int j=1;j<n;j++){
        if(s[j]>=f[i]){
            printf("%d ",j);
            i=j;
        }
    }
}

int main()
{
	int s[] = { 1,3,14,0,9,7 };
	int f[] = { 1,2,3,4,5,6 };
	int n = sizeof(s) / sizeof(s[0]);
	select(s, f, n);
	return 0;
}




