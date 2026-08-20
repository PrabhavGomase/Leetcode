class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1={nums[0]};
        vector<int>arr2={nums[1]};
        int j=0;
        int i=0,c=0;
        while((arr1.size()+arr2.size())<nums.size())
        {
            if(arr1[i]>arr2[j])
            {
                arr1.push_back(nums[c+2]);
                i++;
                c++;
            }
            else
            {
                arr2.push_back(nums[c+2]);
                j++;
                c++;
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};