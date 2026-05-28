class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        sum=0;

        # for nums with only k or less elements
        if k>=len(nums):
            for i in range(len(nums)):
                sum+=nums[i];
            return sum/k;

        #for nums with more than k elements
        #calculate sum once for k elements
        for i in range(k):
            sum+=nums[i];

        max_avg = sum/k;    
        left = 0
        right = k
        #sliding window
        for i in range(len(nums)-k):
            sum = sum - nums[left] +nums[right]
            max_avg = max(max_avg,sum/k)
            left+=1;
            right+=1;

        return max_avg

            
        