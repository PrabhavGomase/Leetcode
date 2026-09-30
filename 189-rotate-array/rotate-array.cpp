class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int x=nums.size();
        k=k%x;
        reverse(nums.begin(),nums.begin()+x-k);
        reverse(nums.begin()+x-k,nums.end());
        reverse(nums.begin(),nums.end());











        // int x=nums.size();
        // k=k%x;
        // reverse(nums.begin(),nums.begin()+x-k);
        // reverse(nums.begin()+x-k,nums.end());
        // reverse(nums.begin(),nums.end());











        // int x=nums.size();
        // k=k%x;
        // reverse(nums.begin(),nums.begin()+x-k);
        // reverse(nums.begin()+x-k,nums.end());
        // reverse(nums.begin(),nums.end());






















        
        // int x=nums.size();
        // reverse(nums.begin(),nums.begin()+k+1);
        // reverse(nums.begin()+k+1,nums.end());
        // reverse(nums.begin(),nums.end());
    }
};