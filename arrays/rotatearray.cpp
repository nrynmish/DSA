#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    k = k % nums.size(); 
    int len = nums.size();
    vector<int> temp;
    for (int i = 0; i < k; i++){
        temp.push_back(nums[i]);
    }

    for (int i = k; i < len; i++){
        nums[i-k] = nums[i];
    }

    for (int i = len-k; i < len; i++){
        nums[i] = temp[i-(len-k)];
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    rotate(nums, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
        
    
    

