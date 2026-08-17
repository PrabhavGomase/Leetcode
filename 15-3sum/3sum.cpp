class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>>ans;
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++)
            {
                if(i>0 && nums[i]==nums[i-1])
                    continue;
                 int left=i+1;int right=nums.size()-1;
                while(left<right)
                {
                int sum=(nums[i]+nums[left]+nums[right]);
                if(sum==0)
                {
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;

                }
                else if(sum>0)
                {
                    right--;
                }
                else
                {
                    left++;
                }
                }
            }

    return ans;




        // set<vector<int>>ans;
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         int target=-(nums[i]+nums[j]);
        //         if(mp.contains(target))
        //         {
        //             vector<int>temp={nums[i],nums[j],target};
        //             sort(temp.begin(),temp.end());
        //             ans.insert(temp);
        //         }
        //     }
        //     mp[nums[i]]=i;
        // }
        // return vector<vector<int>>(ans.begin(),ans.end());
















        // sort(nums.begin(),nums.end());
        // int a=nums[0];
        // int n=nums.size();
        // vector<vector<int>>ans;
        //         for(int i=0;i<n;i++)
        // {
        //     if(i>0 && nums[i]==nums[i-1])   continue;
        //     int left=i+1;int right=n-1;
        //     while(left<right)
        //     {
        //         int sum=nums[i]+nums[left]+nums[right];
        //         if(sum==0)
        //         {
        //             ans.push_back({nums[i],nums[left],nums[right]});
        //             left++;right--;
        //             while (left < right && nums[left] == nums[left - 1]) left++;
        //             while (left < right && nums[right] == nums[right + 1]) right--;
        //         }
        //         else if(sum<0)
        //         {
        //             left++;
        //         }
        //         else
        //         {
        //             right--;
        //         }


        //     }
            
            
        // }
        // return ans;
        // set<vector<int>> ans;
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     set<int>hashset;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         int third=-(nums[i]+nums[j]);
        //         if(hashset.find(third)!=hashset.end())
        //         {
        //             vector<int>temp={third,nums[i],nums[j]};
        //             sort(temp.begin(),temp.end());
        //             ans.insert(temp);
        //         }
        //         hashset.insert(nums[j]);
        //     }
        // }
        // return vector<vector<int>>(ans.begin(),ans.end());











        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size(); i++) {
        //     if (i > 0 && nums[i] == nums[i - 1])   continue;
        //         int j = i + 1;
        //         int k = nums.size() - 1;
        //         while (j < k) {
        //             int sum = nums[i] + nums[j] + nums[k];
        //             if (sum < 0) {
        //                 j++;
        //             } else if (sum > 0) {
        //                 k--;
        //             } else {
        //                 vector<int> res = {nums[i], nums[j], nums[k]};
        //                 ans.push_back(res);
        //                 j++;
        //                 k--;
        //                 while (j < k && nums[j] == nums[j - 1])
        //                     j++;
        //                 while (j < k && nums[k] == nums[k + 1])
        //                     k--;
        //             }
        //         }
        // }
        // return ans;
    }
};