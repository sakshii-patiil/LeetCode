class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        minSub = len(nums)+1
        left = 0
        sum = 0

        for right in range(len(nums)):
            sum += nums[right]
            while sum >= target :
                minSub = min(minSub,right - left + 1)
                sum -= nums[left]
                left += 1

        if minSub == len(nums)+1:
            return 0 
        return minSub
        