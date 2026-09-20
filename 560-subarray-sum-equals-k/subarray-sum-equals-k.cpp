class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0,sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end())
                ans+=mp[sum-k];
            // else 
            //     sum=nums[i];    
            mp[sum]++;
        }
        return ans;











    //     int n=nums.size();
    //     unordered_map<int,int>mp;
    //     mp[0]=1;
    //     int ans=0,sum=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum+=nums[i];
    //         if(mp.find(sum-k)!=mp.end())
    //             ans+=mp[sum-k];
    //         mp[sum]++;
    //     }
    // return ans;


















        // int n=nums.size();

        // unordered_map<int,int>m;
        // m[0]=1;
        // int ans=0;
        // int sum=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(m.find(sum-k)!=m.end()){
        //         ans+=m[sum-k];
        //     }
        //     m[sum]++;
        // }
        // return ans;






;
    }
};
//         int c=0;
//         for(int i=0;i<n;i++)
//         {
//             int sum=0;
//             for(int j=i;j<n;j++)
//             {
//                 sum=sum+nums[j];
//                 if(sum==k)
//                     c++;
//             }
//         }
//         return c