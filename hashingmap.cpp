#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n ;       // size of the array
    int arr[n];
    for (int i = 0; i < n; i++) { // input array elements
        cin >> arr[i];
    }

    //precompute
    map<int, int> mpp; // hash table using map

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    int q;
    cin >> q; // number of queries
    while (q--)
    {
        int number;
        cin >> number; // input the number to be hashed

        //fetch
        cout << mpp[number] << endl;
    }
    
}