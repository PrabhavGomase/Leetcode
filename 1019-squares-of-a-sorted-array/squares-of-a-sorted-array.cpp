class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n=nums.size();
        vector<int>ans;
        int index=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0 && index==-1)
            {
                index=i;
                }
            nums[i]*=nums[i];
        }
        if(index==-1)
{
    reverse(nums.begin(),nums.end());
    return nums;
}
        if(index>0)
            reverse(nums.begin(),nums.begin()+index);
        int i=0;
        int j=index;
        while(i<index && j<n)
        {
            if(nums[j]<nums[i])
            {
                ans.push_back(nums[j]);
                j++;
            }
            else
            {
                ans.push_back(nums[i]);
                i++;
            }
        }
         while (i <index)
            ans.push_back(nums[i++]);
        while (j<n)
            ans.push_back(nums[j++]);
            
        return ans;















        // int n=nums.size();
        // int positive=n;
        // for(int i=0;i<n;i++)
        // {
        //      if(nums[i]>=0)
        //     {
        //         positive=i;
        //         break;
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     nums[i]*=nums[i];
        // }
        // if(positive>0)
        //     reverse(nums.begin(),nums.begin()+positive);
        // if(positive==n)
        //     return nums;
        // // 2 3 0 1 2 3
        // int i=0;
        // int j=positive;
        // vector<int>ans;
        // while(i<positive && j<n)
        // {
        //     if(nums[i]<=nums[j])
        //     {
        //         ans.push_back(nums[i++]);
        //     }
        //     else 
        //         ans.push_back(nums[j++]);
        // }
        //  while (i <positive)
        //     ans.push_back(nums[i++]);
        // while (j < n)
        //     ans.push_back(nums[j++]);
        // return ans;








        // for(int i=0;i<n;i++)
        // {
        
        // }
        // return nums;
    }
};