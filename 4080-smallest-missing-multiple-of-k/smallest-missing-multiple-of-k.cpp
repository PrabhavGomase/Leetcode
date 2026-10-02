class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums)
        {
            mp[x]++;
        }
        int c=k,j=2;
        for(int i=0;i<mp.size();i++)
        {
            if(mp.find(c)!=mp.end())
            {
                c=k*j;
                j++;
            }
            else
            {
                return c;
            }
        }
        return k*(j-1);
    }
};