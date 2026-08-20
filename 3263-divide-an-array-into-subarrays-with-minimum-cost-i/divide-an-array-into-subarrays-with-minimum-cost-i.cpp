class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a=nums[0];
        int mini2=INT_MAX,mini=INT_MAX;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<mini)
            {
                mini2=mini;
                mini=nums[i];
            }
            else if(nums[i]<mini2 )
            {
                mini2=nums[i];
            }
        }
        return a+mini+mini2;
    }
};