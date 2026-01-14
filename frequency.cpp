#include <bits/stdc++.h>
using namespace std;    

void highestFrequencyElement(int arr[], int n) {
    unordered_map<int, int> frequencyMap;
    for (int i = 0; i < n; i++) {
        frequencyMap[arr[i]]++;
    }

    int maxFrequency = 0;
    int elementWithMaxFrequency = arr[0];

    for (auto it : frequencyMap) {
        if (it.second > maxFrequency) {
            maxFrequency = it.second;
            elementWithMaxFrequency = it.first;
        }
    }
    cout << "Element with highest frequency: " << elementWithMaxFrequency << " (Frequency: " << maxFrequency << ")\n";
}


int main() {
    int n;
    cin >> n;       // size of the array
    int arr[n];
    for (int i = 0; i < n; i++) { // input array elements
        cin >> arr[i];
    }
    highestFrequencyElement(arr, n);

    return 0;
    
}