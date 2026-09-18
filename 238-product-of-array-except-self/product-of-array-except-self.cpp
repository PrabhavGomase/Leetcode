class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pr=1;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=pr;
            pr*=nums[i];
        }
        int suf=1;
        for(int i=n-1;i>=0;i--)
        {
            ans[i]*=suf;
            suf*=nums[i];
        }
        return ans;

















    //      int n = nums.size();
    // vector<int> ans(n, 1);
    // int prefix = 1;
    // for (int i = 0; i < n; i++) {
    //     ans[i] = prefix;
    //     prefix *= nums[i];
    // }
    // int suffix = 1;
    // for (int i = n - 1; i >= 0; i--) {
    //     ans[i] *= suffix;
    //     suffix *= nums[i];
    // }

    // return ans;














        // long long prod=1;
        // long long pr=1;
        // vector<int>result;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]!=0)
        //         pr*=nums[i];
        //     prod*=nums[i];
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0)
        //         result.push_back(pr);
        //     else
        //     result.push_back(prod/nums[i]);
        // }
        // return result;
    }
};