#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[min]>arr[j])
                min = j;
        }
        if(min!=i)  swap(arr[min], arr[i]);
    }
}

void printArray(int arr[], int n, string s = ""){
    cout << s;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printArray(arr,n, "Before sorting : ");
    selectionSort(arr, n);
    printArray(arr,n, "After sorting : ");
    return 0;
}