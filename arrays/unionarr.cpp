#include <bits/stdc++.h>
using namespace std;

vector<int> unionArr(int arr1[], int arr2[], int n, int m){
    map<int, int> mp;

    vector<int> ans;

    for(int i = 0; i <n ; i++){
        mp[arr1[i]]++;
    }

    for(int i = 0; i <m ; i++){
        mp[arr2[i]]++;
    }

    for(auto it : mp){
        ans.push_back(it.first);
    }

    return ans;
}

vector<int> optimalunionArr(int arr1[], int arr2[], int n, int m){
    vector<int> ans;
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if(arr1[i] < arr2[j]){
            if(ans.empty() || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }

        else if(arr2[j] < arr1[i]){
            if(ans.empty() || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;

        }

        else {
            if(ans.empty() || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;

        }
    }

        while (i < n) {
        
            if (ans.empty() || ans.back() != arr1[i]){
               ans.push_back(arr1[i]);
            }
        i++;
        }

       while (j < m) {
        
            if (ans.empty() || ans.back() != arr2[j]){
               ans.push_back(arr2[j]);
            }
        j++;
        }

        return ans;

    
}

int main() {
    int n, m;
    cin >> n >> m; // size of the arrays
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++) { 
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) { 
        cin >> arr2[i];
    }

    vector<int> ans = unionArr(arr1, arr2, n, m);

    for (auto it : ans) {
        cout << it << " ";
    }
}