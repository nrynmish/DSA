#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto it: mp){
            
            if(it.second == 1){
                ans = it.first;
                break;
            }
        }
        return ans;
    }

    int optimal(vector<int>& nums){
        int n = nums.size();
        int xorr = 0;
        for(int i = 0; i < n; i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};