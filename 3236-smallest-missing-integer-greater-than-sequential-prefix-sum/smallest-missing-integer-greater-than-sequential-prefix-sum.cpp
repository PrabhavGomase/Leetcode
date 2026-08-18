class Solution {
public:
    int missingInteger(vector<int>& nums) {
    unordered_map<int,int>mp;
    for(auto it:nums)
    {
        mp[it]++;
    }
    int sum=nums[0];
    int index=-1;
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]-nums[i+1]==-1)
        {
            sum+=nums[i+1];
            int index=i+1;
        }
        else
        break;
    }
    int st=INT_MAX;
    if(!mp.contains(sum))
        return sum;
    for(int i=index+1;i<nums.size();i++)
    {
        if(nums[i]+1>=sum)
        {
            if(!mp.contains(nums[i]+1))
                st=min(st,nums[i]+1);
        }
    }
    return st;
    }
};