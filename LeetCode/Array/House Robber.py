class Solution:
    def rob(self, nums: List[int]) -> int:

        n = len(nums)

        if n == 1:
            return nums[0]
        max_excluding_current = 0
        max_including_current = nums[0]

        for i in range(1, n):
            new_max_excluding_current = max(max_excluding_current, max_including_current)

            max_including_current = max_excluding_current + nums[i]
            max_excluding_current = new_max_excluding_current
        return max(max_excluding_current, max_including_current)
