class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        reader = 0
        if len(nums)!=1:
            writer = reader+1
            if nums[writer] == 0 and len(nums)==2:
                return
            while writer < len(nums):
                if nums[reader] == nums[writer] == 0:
                    writer+=1
                elif nums[reader] == 0:
                    nums[reader], nums[writer] = nums[writer], nums[reader]
                    reader+=1
                    writer+=1
                else:
                    reader+=1
                    writer+=1
            