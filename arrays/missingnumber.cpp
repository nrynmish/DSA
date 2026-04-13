#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        int xor1 = 0;
        int xor2 = 0;

        for(int i= 0; i < n; i++){
            xor1 ^= nums[i];
        }

        for(int i = 0; i<=n; i++){
            xor2 ^= i;
        }
        return xor2 ^ xor1;

    }
};