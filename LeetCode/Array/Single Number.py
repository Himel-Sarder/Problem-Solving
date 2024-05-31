class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        seen = set()
        duplicates = set()
        result = set()
        
        for num in nums:
            if num in seen:
                duplicates.add(num)
            else:
                seen.add(num)
        result = seen - duplicates
        inte = result.pop()
        return inte
