#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    
    int i = 0;
    for(int j =i+1; j<nums.size() ; j++){
        if (nums[j] != nums[i]){
            nums[i+1] = nums[j];
            i++ ;
        }
        
    }
    return (i+1);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int newLength = removeDuplicates(nums);

    cout << "Length of array after removing duplicates: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}   