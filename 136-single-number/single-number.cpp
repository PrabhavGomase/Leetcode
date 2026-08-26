class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            x^=nums[i];
        }
        return x;










//         unordered_map<int,int> m;
//         for(int num:nums)
//         {
//         m[num]++;
//         }
//         for(auto it:m)
//         {
//             if(it.second==1)
//             return it.first;
//         }


// return -1;

















        int n=0;
        for(int i=0;i<nums.size();i++)
        {
            n=n^nums[i];
        }
        return n;
    }
    //       unordered_map<int, int >seen;
    //      for (int num:nums){
    //         seen[num]++;
    //     }
    //    for (auto & p:seen){
    //     if (p.second==1) return p.first;
    //    }
    //    return -1;
    
};