class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx=0;
        int mn=1001;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mx)
                mx=nums[i];
            if(nums[i]<mn)
                mn=nums[i];
        }
        int remainder=1;
        while(remainder>0)
        {
            remainder=mx%mn;
            if(remainder!=0)
            {
                mx=mn;
                mn=remainder;
            }
        }
        return mn;
    }
};