class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            while (nums[i] >= 1 && nums[i] <= n && nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
            return i+1;
        }
        return n+1;
    }
        // int a=0;
        // sort(nums.begin(),nums.end());
        // int c=-1;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==1)
        //         c=i;
        // }
        // if(c==-1)
        // return 1;
        // for(int i=c+1;i<n;i++)
        // {
        //     if(nums[c]==1 && nums[i]-nums[i-1]==1 || nums[i]-nums[i-1]==0 )
        //     {
        //     a++;
        //     continue;
        //     }
        //     else
        //     return nums[i-1]+1;
        // }
        // int x=nums.size()-c;
        //     if(a==x-1)
        //     return nums[nums.size()-1]+1;
        // return 0;
    
};