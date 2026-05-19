class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> seen = new HashMap<Integer,Integer>();
        int[] index = new int[2];
        for(int i=0;i<nums.length;i++)
        {
            int find = target - nums[i];

            if(seen.containsKey(find))
            {
                index[0]=seen.get(find);
                index[1] = i;
                return index;
            }
            seen.put(nums[i],i);
        }
        return index;
    }
}