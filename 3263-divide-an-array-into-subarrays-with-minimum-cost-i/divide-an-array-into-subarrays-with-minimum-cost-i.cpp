class Solution {
public:
    int minimumCost(vector<int>& nums) {
        if(nums.size()==3)
        return nums[0]+nums[1]+nums[2];
        int a=nums[0];
        vector<int>num=nums;
        sort(nums.begin(),nums.end());
        // if(num[0]!=nums[0])
        if(a!=nums[0] && a!=nums[1])
        return a+nums[0]+nums[1];
        else
        return nums[0]+nums[2]+nums[1];
    }
};