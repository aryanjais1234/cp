#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int size3 = size1 + size2;
    int arr3[size3], j=0,k=0;
    for(int i=0; i<size3 ; i++){
        while(j<=size1){
            while(k<=size2){
                if(arr1[j]>arr2[k]){
                    ans[i] = arr2[k];
                    k++;
}
                else{
                    ans[i] = arr1[j];
                    j++;
}
            }
}
}
}



int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;

		int *arr1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int *arr2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int *ans = new int[size1 + size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;
		delete[] arr1;
		delete[] arr2;
		delete[] ans;
	}
}
