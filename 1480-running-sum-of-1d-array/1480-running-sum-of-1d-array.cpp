class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)//not to be started from 0 as 0=0+[-1] so this is wrong
        {
          nums[i]=nums[i]+nums[i-1];
        }
    
    return nums;
    }
};