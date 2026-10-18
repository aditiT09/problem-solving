class Solution {
    public int[] rearrangeArray(int[] nums) {
        // List<Integer> pos = new ArrayList<>();
        // List<Integer> neg = new ArrayList<>();

        // for (int i = 0; i < nums.length; i++) {
        //     if (nums[i] > 0) {
        //         pos.add(nums[i]);
        //     } else {
        //         neg.add(nums[i]);
        //     }
        // }

        // int[] ans = new int[nums.length];

        // for (int i = 0; i < pos.size(); i++) {
        //     ans[2 * i] = pos.get(i);
        //     ans[2 * i + 1] = neg.get(i);
        // }

        // return ans;
        int[] ans=new int[nums.length];
        int n= nums.length;
        int pos=0;
        int neg=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            {
                ans[pos]=nums[i];
                pos=pos+2;
            }
            else{
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }
        return ans;
    }
}
