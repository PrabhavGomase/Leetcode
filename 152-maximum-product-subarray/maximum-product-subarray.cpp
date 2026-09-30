class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int ans=INT_MIN;
        int prefix=1,suffix=1;
        for(int i=0;i<nums.size();i++)
        {   
            prefix*=nums[i];
            suffix*=nums[nums.size()-i-1];
            ans=max(ans,max(prefix,suffix));
            if(prefix==0)
                prefix=1;
            if(suffix==0)
                suffix=1;

        }
        return ans;











        // int n=nums.size();
        // int mx=INT_MIN;
        // int pre=1,suf=1;
        // for(int i=0;i<n;i++)
        // {
        //     if(pre==0)
        //     pre=1;
        //     if(suf==0)
        //     suf=1;
        //     pre*=nums[i];
        //     suf*=nums[n-i-1];
        //     mx=max(mx,max(pre,suf));
        // }
        // return mx;










        
    //     int n=nums.size();
    //     int mx=INT_MIN;
    //     int prefix=1,suffix=1;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(prefix ==0) prefix=1;
    //         if(suffix==0) suffix=1;
            
    //         prefix=prefix*nums[i];
    //         suffix=suffix*nums[n-i-1];
    //         mx=max(mx,max(prefix,suffix));
    //     }
    // return mx;
    }
};