class Solution {

public:

    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int>yes;

        int n = nums.size();

        for(int i=0;i<n;i++)

        {

            if(yes.find(target-nums[i])!=yes.end())

                return {yes[target-nums[i]],i};

            yes[nums[i]]=i;

        }

        return {};

    }

};
