class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int low=0,high=arr.size()-1;
        // while(low<=high)
        // {
        //     int mid=(low+high)/2;
        //     if(nums[mid])

        // }
        // return 0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=k)
            k++;
            else
            break;
        }
        return k;
    }
};