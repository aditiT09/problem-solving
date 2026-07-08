class Solution {
public:
    int trap(vector<int>& height) {
    //     int n=height.size();
    //     vector<int>left(n);
    //     int max_element=-1;
    //     for(int i=0;i<n;i++)
    //     {
    //         max_element=max(max_element,height[i]);
    //         left[i]=max_element;
    //     }
    //     max_element=-1;
    //     vector<int>right(n);
    //     for(int i=n-1;i>=0;i--)
    //     {
    //         max_element=max(max_element,height[i]);
    //         right[i]=max_element;
    //     }
    //     int area=0;
    //     for(int i=0;i<=n-1;i++)
    //     {
    //         area=area+min(left[i],right[i])-height[i];
           
    //     }
    //      return area;
    // }
    // int left=0,right=height.size()-1,area=0,lmax=-1,rmax=-1;
    // while(left<right){
    //     lmax=max(lmax,height[l]);
    //     rmax=max(rmax,height[r]);
    //     if(lmax<rmax){
    //         area=area+lmax-height[l];
    //         l++
    //     }
    //     else 
    //     area=area+rmax-height[r];
    //     r--;
            
    
    // int n = height.size();
    // int water=0;
    
    // for(int i=0;i<n;i++)
    // {
    //     int leftMax=0,rightMax=0;
    
    // for(int j=0;j>i;j++)
    // {
    //     leftMax=min(leftMax,height[j]);

    // }
    // for(int l=0;l<n;l++)
    // {
    //     rightMax=min(rightMax,height[l]);
    // }
    
    // water+=min(leftMax,rightMax)-height[i];
    // }
    // return water;
    int n= height.size();
    if(n==0)
    return 0;

    vector<int> prefix(n), suffix(n);

    prefix[0] =height[0];
    for (int i=1;i<n;i++)
    prefix[i]=max(prefix[i-1], height[i]);
    
    suffix[n-1] =height[n-1];
    for (int i=n-2;i>=0;i--)
    suffix[i]=max(suffix[i+1],height[i]);

    int ans=0;
    for(int i=0;i<n;i++)
    ans+=min(prefix[i],suffix[i])-height[i];
    return ans;


        }
    
};