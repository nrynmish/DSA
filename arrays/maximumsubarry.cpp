#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_sum = INT_MIN;
    int current_sum = 0;

    for (int num : nums) {
        current_sum += num;
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    return max_sum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum subarray sum is: " << maxSubArray(nums) << endl;
    return 0;
}