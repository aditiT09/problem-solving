class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // int n=nums.size();
        // set<vector<int>>Unique;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         for(int k=j+1;k<n;k++)
        //         {
        //             for(int l=k+1;l<n;l++)
        //             {
        //                 long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
        //                 if(sum==target){
        //                     vector<int>ans={nums[i],nums[j],nums[k],nums[l]};
        //                     sort(ans.begin(),ans.end());
        //                     Unique.insert(ans);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return vector<vector<int>>(Unique.begin(),Unique.end());
        
        int n= nums.size();
        set<vector<int>>Unique;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {   
                unordered_set<int>seen;
                for(int k=j+1;k<n;k++)
                {
                 
                    long long needed=(long long)target-nums[i]-nums[j]-nums[k];
                    if(needed>=INT_MIN && needed<=INT_MAX && seen.find((int)needed)!=seen.end()){
                        vector<int>ans={nums[i],nums[j],nums[k],(int)needed};
                        sort(ans.begin(),ans.end());
                        Unique.insert(ans);
                    }
                    seen.insert(nums[k]);
                    }
                }
            }
        return vector<vector<int>>(Unique.begin(),Unique.end());
    }
};