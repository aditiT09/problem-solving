class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()!=t.size())
        // {
        //     return false;
        // }
        // unordered_map<char,int> freq;
        // {
        //     for(char c: s)
        // {
        //     freq[c]++;
        // }
        // for(char c:t)
        // {
        //     freq[c]--;
        //     if(freq[c]<0)
        //   return false;
        // }
          
        // }
        // return true;
        if(s.size() != t.size())
            return false;
        unordered_map<char,int>mp;
           for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        for(int i = 0; i < t.size(); i++)
        {
            mp[t[i]]--;

            if(mp[t[i]] < 0)
                return false;
        }

        return true;
    }
};