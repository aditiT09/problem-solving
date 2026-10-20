class Solution {
public:
   /* vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
        return ans;
    }
};
*/
// vector<int> twosum(vector<int>& nums, int target) {
//     vector<int> ans;
//     map<int,int> d;
//     for(int i=0;i<nums.size(); i++)
//     {
//         int t =target-nums[i];
//          if (d.find(t)!= d.end()){
//             ans.push_back(d[t]);
//             ans.push_back(i);
//             break;       
//              }
//             d[nums[i]] =i;
//     }
//     return ans;
//     }  
// };
// vector<int> twoSum(vector<int>& nums, int target) {
//     for (int i=0;i<nums.size();i++)
//     {
//         for (int j=i+1;j<nums.size();j++)
//         {
//             int sum=nums[i]+nums[j];
            
//                 if(sum==target)
//                 {
//                     return {i,j};
//                 }
            
//         }
//     }
//      return {};
//   }
 
// };
  vector<int> twoSum(vector<int>& nums, int target) {
    //     unordered_map<int,int> mp;
    //     for(int i = 0; i < nums.size(); i++)
    //     {
    //         int needed = target - nums[i];
    //         if(mp.find(needed) != mp.end())
    //         {
    //             return {mp[needed], i};
    //         }
    //         mp[nums[i]] = i;
    //     }
    //         return {};
    // }
    int n=nums.size();
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int needed=target-nums[i];
        if(m.find(needed)!=m.end())
        {
            return {m[needed],i};
        }
        m[nums[i]]=i;
        }
         return {};
  }
};