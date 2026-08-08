class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0,in=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[in]=nums[i];
                in++;
                cnt++;
            }
            
        }     
        return cnt;
    }
};