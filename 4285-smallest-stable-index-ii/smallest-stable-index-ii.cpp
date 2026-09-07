class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>smin(n);
        smin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            smin[i]=min(nums[i],smin[i+1]);
        }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,nums[i]);
        if(mx-smin[i]<=k)
            return i;
    }
    return -1;





    }
};