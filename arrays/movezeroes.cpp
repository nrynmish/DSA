#include <bits/stdc++.h>
#include <vector>
using namespace std;

void removezeroes(vector<int>& nums){
    vector<int> temp;
    int len = nums.size();
    int count = 0;
    for(int i = 0; i < len; i++){
        if(nums[i] > 0){
            temp.push_back(nums[i]);
            count ++;
        }
    }

    for(int i = 0; i < len; i++){
        if(nums[i] == 0){
            temp.push_back(nums[i]);
        }
    }
}