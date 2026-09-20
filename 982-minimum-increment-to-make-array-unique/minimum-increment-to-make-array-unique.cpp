class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long inc=0;
        for(int i=1;i<nums.size();i++)
        {
            long long a=nums[i];
            // while(a<=nums[i-1])
            // {
            //     a++;
            //     inc++;
            // }
            if(nums[i]<=nums[i-1])
            {
                inc+=nums[i-1]+1-nums[i];
                nums[i]=nums[i-1]+1;
            }
           
        }
        return inc;
    }
};