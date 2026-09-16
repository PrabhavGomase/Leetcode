class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,ans=0,sum=0;
          vector<int> hs(10001, 0);
        for(int i=0;i<nums.size();i++)
        {
            if(hs[nums[i]]==0)
            {
                hs[nums[i]]++;
                sum+=nums[i];
            }
            else
            {
                hs[nums[i]]++;
                sum+=nums[i];
                while(hs[nums[i]]!=1)
                {
                    hs[nums[l]]--;
                    sum-=nums[l];
                    l++;   
                }
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};