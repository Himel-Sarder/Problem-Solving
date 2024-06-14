Problem: https://leetcode.com/problems/remove-element/description/

Answer:
-------
int removeElement(vector<int>& nums, int val) {
    int k = 0;  // Count of elements not equal to val

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}



Full code:
----------
#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;  // Count of elements not equal to val

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int expectedNums[] = {2, 2}; // Expected result after removing val = 3

    int k = removeElement(nums, val);

    // Custom judge validation
    assert(k == 2);
    sort(nums.begin(), nums.begin() + k); // Sort the first k elements
    for (int i = 0; i < k; i++) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "Number of elements not equal to " << val << ": " << k << endl;
    cout << "Array after removing elements equal to " << val << ": ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
