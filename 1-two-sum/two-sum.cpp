class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int ans=target-nums[i];
            if(mp.contains(ans))
            return {i,mp[ans]};
            mp[nums[i]]=i;
        }
        return {-1,-1};








        




    //     unordered_map<int,int> map;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++)
    //     {
    //         int more=target-nums[i];
    //         if(map.find(more)!=map.end())
    //         {
    //             return {map[more],i};
    //         }
    //         map[nums[i]]=i;
    //     }

    // return {0};


    }




    //     unordered_map<int,int>mpp;
    //     int x=nums.size();
    //     for(int i=0;i<x;i++)
    //     {
    //         int num=nums[i];
    //         int more=target-num;
    //         if(mpp.find(more)!=mpp.end())
    //         {
    //             return {mpp[more],i};
    //         }
    //         mpp[num]=i;
    //     }
    //     return {-1,-1};
    // }




    // vector<int>g;
   
    // int sum=0;
    // for(int i=0;i<x-1;i++)
    // {
    //     for(int j=i+1;j<x;j++)
    //     {
    //         sum=nums[i]+nums[j];
    //         if(sum==target)
    //         {
    //         g.push_back(i);
    //         g.push_back(j);
    //         break;
    //         }
    //     }
    
    // }
    // return g;
    // }














    
    //     unordered_map<int,int>num;
    //     // vector<int>n;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         int a=nums[i];
    //         int more=target-a;
    //         if(num.find(more)==num.end())
    //         {
    //             num[a]=i;
    //             // n.push_back(num[more]);n.push_back(i);
    //         }
    //         else
    //         return {num[more],i};
            
    //     }
    //     return {-1,-1};
    // //     int sum=0;
    // // for(int i=0;i<nums.size()-1;i++)
    // // {
    // //     for(int j=i+1;j<nums.size();j++)
    // //     {
    // //         if(nums[i]+nums[j]==target)
    // //             {
    // //                 num.push_back(i);
    // //                 num.push_back(j);
    // //             }
    // //     }
    // // }
    // //     return num;
        
        
    // }

};
