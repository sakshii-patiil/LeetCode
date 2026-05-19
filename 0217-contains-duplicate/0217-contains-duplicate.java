class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer,Boolean> duplicates = new HashMap<>();

        for(int i=0;i<nums.length;i++)
        {
            if(duplicates.containsKey(nums[i]))
                return true;
            duplicates.put(nums[i],false);
        }
        return false;
    }
}