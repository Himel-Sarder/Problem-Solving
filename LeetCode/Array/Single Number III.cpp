class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> frequencies;

      // Iterate through each element in the array
      for (int num : nums) {
        // Check if the element already exists in the map
        if (frequencies.count(num) == 0) {
          // If not found, insert it with a frequency of 1
          frequencies[num] = 1;
        } else {
          // If found, increment its frequency
          frequencies[num]++;
        }
      }

      // Initialize a vector to store the unique numbers
      vector<int> uniqueNumbers;

      // Iterate through the map
      for (auto& entry : frequencies) {
        // If the frequency of an element is 1 (meaning it appeared only once), add it to the unique numbers vector
        if (entry.second == 1) {
          uniqueNumbers.push_back(entry.first);
        }
      }

      // The vector will contain the two unique numbers
      return uniqueNumbers;
    }
};
