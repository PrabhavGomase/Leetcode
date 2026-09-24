class Solution {
public:
    long long sumof(int num)
    {
        if(num<=9)
            return num;
        long long sum=0;
        while(num>=1)
        {
            int digit=num%10;
            sum+=digit;
            num/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(sumof(nums[i])==i)
                return i;
        }
        return -1;
    }
};