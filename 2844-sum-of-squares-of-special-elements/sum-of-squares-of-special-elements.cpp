class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int a=(i+1);
            if(nums.size()%a==0)
            {
                sum+=(nums[i]*nums[i]);
            }
        }
        return sum;
    }
};