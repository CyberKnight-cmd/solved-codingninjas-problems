#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n){
    for (int i = n - 1; i > 0; i--) {
        bool swapped = false;
        for (int j = 0; j < i; j++) {
            if (arr[j + 1] < arr[j]) {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }
        if (!swapped) return;                   
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
    bubbleSort(arr, n);
    printArray(arr,n, "After sorting : ");
    return 0;
}