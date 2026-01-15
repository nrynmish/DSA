#include <iostream>
using namespace std;

void selectionsort(int arr[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j <= n-1; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    
        }
}
// this is not ACTUALLY selection sort

void selectionsort1(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main() {
    int n;
    cin >> n;       // size of the array
    int arr[n];
    for (int i = 0; i < n; i++) { // input array elements
        cin >> arr[i];
    }
    selectionsort1(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}