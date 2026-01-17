#include <bits/stdc++.h>
using namespace std;    

void insertionsort(int arr[], int n) {
    for (int i = 0; i < n; i++) {

        int j = i ;
        
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
        
        }
    }


int main() {
    int n;
    cin >> n; // size of array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // input array elements
    }

    insertionsort(arr, n);
    cout << "sorted array:" ;
    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;
    return 0;
}