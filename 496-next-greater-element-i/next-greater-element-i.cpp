class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        int n1=nums1.size();
        int n2=nums2.size();

        int i=0,j=0;
        for(auto x:nums2)
        {
            while(!st.empty() && x>st.top())
            {
                mp[st.top()]=x;
                st.pop();
            }
            st.push(x);
        }
        while(!st.empty())
        {
            mp[st.top()]=-1;
            st.pop();
        }
       for(int i=0;i<n1;i++)
       {
        if(mp.find(nums1[i])!=mp.end())
            nums1[i]=mp[nums1[i]];
       }
       return nums1;
    }
};