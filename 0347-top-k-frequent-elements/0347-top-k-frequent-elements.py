import heapq
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        minK = []
        seen = {}
        j=0
        
        #count frequency
        for i,n in enumerate(nums):
            seen[n] = seen.get(n,0)+1
            
        
        for num,freq in seen.items():
            heapq.heappush(minK, (freq,num))
            if len(minK) > k :
                heapq.heappop(minK)
        return [num for freq , num in minK]


        

        