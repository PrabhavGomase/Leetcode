class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        long long sum=0;
        long long ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            ans=max(ans,sum);
            if(sum<0)
            sum=0;
        }
        return ans;



















        // long long sum=0;
        // long long ma=INT_MIN;
        // for(int i=0;i<nums.size();i++)
        // {
        //     sum+=nums[i];
        //     ma=max(sum,ma);
        //     if(sum<0)
        //     sum=0;
        // }
        // return ma;








//         int sum=0;
//         int maxs=INT_MIN;
//         for(int i=0;i<nums.size();i++)
//         {
//             sum=sum+nums[i];
//             maxs=max(maxs,sum);
//             if(sum<0)
//             {
//                 sum=0;
//             }
//         }
//         return maxs;
//     }
// };





        // int n=nums.size();
        // int sum=0;
        // int m=nums[0];
        // if(nums.size()==1)
        //     return nums[0];
        // for(int i=0;i<n;i++)
        // {
        //     sum=nums[i];
        //     m=max(sum,m);
        //     for(int j=i+1;j<n;j++)
        //     {
        //         sum=sum+nums[j];
        //         m=max(m,sum);
        //     }
        // }
        // return m;









        







        // int maxi = INT_MIN;
        // int sum = 0;int m=INT_MIN;
        // for(int i=0;i<nums.size();i++)
        // {
        //     m=max(m,nums[i]);
        // }
        // if(m<0)
        // {
        //     return m;
        // }
        // for (int i = 0; i < nums.size(); i++) {
        //     sum+=nums[i];
        //     if(sum<0)
        //     {
        //         sum=0;
        //     }
        //     if(sum>maxi)
        //     {
        //         maxi=sum;
        //     }
        // }
        // return maxi;
    }
    };