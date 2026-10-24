class Solution {
public:
//    /* int maxSubArray(vector<int>& nums) {
//         int currsum=0;
//         int maxsum=INT_MIN;
//         for(int i=0;i<nums.size();i++)
//         {
//             currsum=currsum+nums[i];
//             maxsum=max(currsum,maxsum);
//             if(currsum<0)
//             currsum=0;
//         }
//          return maxsum;*/
    
//   int maxSubArray(vector<int>& nums) {
//     int n = nums.size();
//     int maxsum = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             int currsum = 0;  
//             for (int k = i; k <= j; k++) {
//                 currsum += nums[k];
//             }

//             maxsum = max(maxsum, currsum);
//         }
//     }

//     return maxsum;
int maxSubArray(vector<int>& nums) {
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        currsum=currsum+nums[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0)
        {
            currsum=0;
        }
        
    }
     return maxsum;
}
  
};