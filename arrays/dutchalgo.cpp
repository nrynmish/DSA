#include <iostream>
#include <vector>
using namespace std;    

void sortColors(vector<int>& nums){
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0) cnt0++;
        else if(nums[i] == 1) cnt1++;
        else cnt2++;
    }
    int i = 0;
    while(cnt0--) nums[i++] = 0;
    while(cnt1--) nums[i++] = 1;
    while(cnt2--) nums[i++] = 2;
}

void dutchAlgo(vector<int>& nums){
    int low = 0, mid = 0, high = nums.size() - 1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1) mid++;
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    dutchAlgo(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}