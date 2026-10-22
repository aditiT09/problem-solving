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
        

        //APPROACH 2
        // int n= nums.size();
        // set<vector<int>>Unique;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {   
        //         unordered_set<int>seen;
        //         for(int k=j+1;k<n;k++)
        //         {
                 
        //             long long needed=(long long)target-nums[i]-nums[j]-nums[k];
        //             if(needed>=INT_MIN && needed<=INT_MAX && seen.find((int)needed)!=seen.end()){
        //                 vector<int>ans={nums[i],nums[j],nums[k],(int)needed};
        //                 sort(ans.begin(),ans.end());
        //                 Unique.insert(ans);
        //             }
        //             seen.insert(nums[k]);
        //             }
        //         }
        //     }
        // return vector<vector<int>>(Unique.begin(),Unique.end());


        //APPROACH 3
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {   
            if(i>0&&nums[i]==nums[i-1])
                continue;
            
            for(int j=i+1;j<n-2;j++){
             if(j>i+1&&nums[j]==nums[j-1])
                continue;
                int left=j+1;
                int right=n-1;
                while(left<right)
                {
                     long long x = (long long)nums[left] + nums[right];
                     long long y = (long long)target - nums[i] - nums[j];

                     if(x==y)
                    {
                      vector<int>final={nums[i],nums[j],nums[left],nums[right]};
                      ans.push_back(final);
                      left++;
                      right--;
                    
                     while (left < right &&
                               nums[left] == nums[left - 1])
                            left++;

                        while (left < right &&
                               nums[right] == nums[right + 1])
                            right--;
                    }
                    else if(x>y)
                    {
                        right--;
                    }
                    else{
                        left++;
                    }
                   
                }
            }
        }
        
        return ans;
    }
};