class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        new_str = []
        max_length=0
    
        if not s:
            return 0
        for i in range(len(s)):
            if s[i] not in new_str:
                new_str.append(s[i])
                #print("".join(new_str))
            else:
                temp_idx = new_str.index(s[i])
                new_str = new_str[temp_idx+1:]
                new_str.append(s[i]) 
            max_length = max(max_length,len(new_str))   
        return max_length
        