Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/


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
