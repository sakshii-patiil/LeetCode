class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        slow = nums[0] #1
        fast = nums[nums[0]] #3

        while slow!=fast:
            slow = nums[slow] #1->3
            fast = nums[nums[fast]] #3->4
        
        slow=0

        while slow!=fast:
            slow=nums[slow]
            fast = nums[fast]
            
        return slow