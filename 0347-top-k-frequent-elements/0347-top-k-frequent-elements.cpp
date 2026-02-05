class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(auto x: nums)
        {
            freq[x]++;
        }
        vector<int> result;
        for(int i=0;i<k;i++)
        {   
            int maxfreq=0;
            int element=0;
            for(auto y:freq)
            {
             if(y.second>maxfreq)
             {
            maxfreq=y.second;
             element=y.first;
             }

            }
            result.push_back(element);
            freq.erase(element);
        }
        return result;
    }
};