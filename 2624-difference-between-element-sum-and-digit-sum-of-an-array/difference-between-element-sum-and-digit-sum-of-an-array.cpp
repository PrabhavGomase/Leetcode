class Solution {
public:
    int countdigit(int n)
    {
        int sum=0;
        while(n>=1)
        {
            int digit=n%10;
            sum+=digit;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            sum1+=nums[i];
            sum2+=countdigit(nums[i]);
        }
        return sum1-sum2;
    }
};