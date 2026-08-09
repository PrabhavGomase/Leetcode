class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int low=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                low=min(low,abs(i-start));
            }
        }
        return low;
    }
};