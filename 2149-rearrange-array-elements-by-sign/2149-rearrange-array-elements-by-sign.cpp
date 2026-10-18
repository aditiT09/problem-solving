class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int n = nums.size();
        // vector<int>positive;
        // vector<int>negative;
        // for(int i =0; i<n; i++){
        //     if(nums[i]>=0)
        //     {
        //         positive.push_back(nums[i]);
        //     }
        //     else{
        //         negative.push_back(nums[i]);
        //     }
        // }
        // vector<int>ans;
        // for(int i=0;i<positive.size();i++){
        //     ans.push_back(positive[i]);
        //     ans.push_back(negative[i]);
        // }
        // return ans;
        int pos=0;
        int neg=1;
        int n=nums.size();
        vector<int> ans(n);
        for(int x:nums)
        {
            if(x>=0)
            {
                ans[pos]=x;
                pos +=2;
            }
            else
            {
                ans[neg]=x;
                neg+=2;
            }
        }
        return ans;
    }
};