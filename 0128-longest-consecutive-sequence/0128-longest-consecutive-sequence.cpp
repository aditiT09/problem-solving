class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    // unordered_set<int> st(nums.begin(), nums.end());
    //     int longest = 0;
    //     for(int num : st)
    //     {if(st.find(num - 1) == st.end())
    //         {
    //             int current = num;
    //             int length = 1;
    //             while(st.find(current + 1) != st.end())
    //             {
    //                 current++;
    //                 length++;
    //             }

    //             longest = max(longest, length);
    //         }
    //     }

    //     return longest;
  

        if (nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int count = 1;
        int longest = 1;

        for (int i = 0; i < n - 1; i++) {

            if (nums[i + 1] == nums[i])
                continue;

            if (nums[i + 1] - nums[i] == 1) {
                count++;
            }
            else {
                count = 1;
            }

            longest = max(longest, count);
        }

        return longest;
    }
};