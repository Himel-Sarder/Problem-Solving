Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

Answer:
--------
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


    if (nums.empty()) return 0;

    int k = 1;  // Start from the first unique element

    for (int i = 1; i < nums.size(); i++) {

        if (nums[i] != nums[i - 1]) {

            nums[k] = nums[i];

            k++;

        }

    }

    return k;

  }

};


Full code:
-----------
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int k = 1;  // Start from the first unique element

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    vector<int> nums = {1, 1, 2};
    int expectedNums[] = {1, 2};
    
    int k = removeDuplicates(nums);
    
    assert(k == 2);
    for (int i = 0; i < k; i++) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
