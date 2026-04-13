#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int el;
    for(int i = 0; i < nums.size(); i++){
        if(count == 0){
            el = nums[i];
        }
        if(nums[i] == el) count++;
        else count--;
    }

    int cnt1 = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == el) cnt1++;
    }
    if(cnt1 > nums.size() / 2) return el;
    return -1;
}

int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;
    return 0;
}