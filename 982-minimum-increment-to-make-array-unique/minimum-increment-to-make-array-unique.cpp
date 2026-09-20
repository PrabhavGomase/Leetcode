class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long inc=0;
        for(int i=1;i<nums.size();i++)
        {
            long long a=nums[i];
            while(a<=nums[i-1])
            {
                a++;
                inc++;
            }
            nums[i]=a;
        }
        return inc;
    }
};