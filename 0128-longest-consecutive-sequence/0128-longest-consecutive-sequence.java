class Solution {
    public int longestConsecutive(int[] nums) {
        int n=nums.length;
        int count=1;
        int longest=1;
        if(n==0)
        {
            return 0;
        }
        Arrays.sort(nums);
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]==nums[i])
            {
                continue;
            }
            if(nums[i+1]-nums[i]==1)
            {
                count++;
            }
            else
            {
                count=1;
            }
            longest=Math.max(longest,count);
        }
        return longest;
    }
}