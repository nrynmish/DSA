#include <bits/stdc++.h>
using namespace std;
//brute force to rotate left
void rotateleft(vector<int>& nums, int k) {
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
//brute force to rotate right
void rotateright(vector<int>& nums, int k) {
    int len = nums.size();
        k = k % len;
        vector<int> temp;

        for(int i = len - k; i < len; i++ ){
            temp.push_back(nums[i]);
        }

        for(int i = len-k-1; i >= 0; i--){
            nums[i + k] = nums[i];
        }

        for(int i = 0; i < k; i++){
            nums[i] = temp[i];
        }
}
//optimal solution to rotate left
void rotateleftoptimal(vector<int>& nums, int k) {
    k = k % nums.size();
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
}

//optimal solution to rotate right
void rotaterightoptimal(vector<int>& nums, int k) {
    int len = nums.size();
    k = k % len;    
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    rotateleft(nums, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
        
    
    

