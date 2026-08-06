class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    //   unordered_map<int,int>mp; 
    //   for(int i=0;i<numbers.size();i++)
    //   {
    //     int diff=target-numbers[i];
    //     if(mp.find(diff)!=mp.end())
    //     {
    //         return {mp[diff]+1,i+1};
    //     }
    //     mp[numbers[i]]=i;
    //   }
    //   return {-1,-1};
    int low=0,high=numbers.size()-1;
    while(low<high)
    {
        int sum=numbers[low]+numbers[high];
        if(sum==target)
        return {low+1,high+1};
        else if(sum>target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return {0,0};
    }
};