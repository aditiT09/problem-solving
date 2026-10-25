class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // vector<int>original=nums;
        // vector<vector<int>>all;
        // sort(nums.begin(),nums.end());
        // do{
        //     all.push_back(nums);
        // }
        // while(next_permutation(nums.begin(),nums.end()));
        //  for(int i=0;i<all.size();i++)
        //  {
        //     if(all[i]==original)
        //     {
        //         if(i==all.size()-1)
        //         {
        //             nums=all[0];
        //         }
        //         else
        //         {
        //             nums=all[i+1];
        //         }
        //         return;
        //     }
            
            
        //  }
     
    //     vector<int> original = nums;

    //     sort(nums.begin(), nums.end());

    //     do {
    //         if (nums == original) {
    //             if (!next_permutation(nums.begin(), nums.end())) {
    //                 sort(nums.begin(), nums.end());
    //             }
    //             return;
    //         }
    //     } while (next_permutation(nums.begin(), nums.end()));
    // }
    int n = nums.size();
    int i=nums.size()-2;
    while(i>=0&&nums[i]>=nums[i+1])
    {
        i--;
    }
    if (i >= 0) {
        int j = n - 1;

        while (nums[j] <= nums[i]) {
            j--;
        }

        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
    }
    
};