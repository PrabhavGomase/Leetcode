class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int maximum=0;
        int a1=nums[0];int a2=nums[nums.size()-1];
        unordered_map<int,int>mp;
        if(k==nums.size())
        {
        for(int i=0;i<nums.size();i++)
        {
            maximum=max(nums[i],maximum);
        }
        return maximum;
        }
        for(int i= 0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ans=-1;
        if(k==1)
        {
            for(int i= 0;i<nums.size();i++)
        {
            if(mp[nums[i]]==1)
            {
                ans=max(ans,nums[i]);
            }
            
        }
        return ans;
        }   
        int count1=mp[nums[0]];int count2=mp[nums[nums.size()-1]];
        if(count1==1 && count2>1)
        return a1;
        else if(count2==1 && count1>1)
        return a2;
        else if(count1==1 && count2==1)
        {
            return max(a1,a2);
        }
    return -1;
    }
};