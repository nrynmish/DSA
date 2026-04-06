#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n ; i++){
            if(nums[i] == 1){
                count ++;
            }
            if(nums[i] == 0){
                count = 0;
            }
            maxcount = max(count, maxcount);
           
        }
        return maxcount;
    }
};

int main(){
    return 0;
}
