class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,ans=0;
        unordered_set<char>st;
        for(int i=0;i<s.size();i++)
        {
            while(st.count(s[i]))
            {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[i]);
            ans=max(ans,i-l+1);
        }

return ans;




        // unordered_set<char> st;
        // int l = 0, ans = 0;

        // for (int r = 0; r < s.size(); r++) {
        //     while (st.count(s[r])) {
        //         st.erase(s[l]);
        //         l++;
        //     }

        //     st.insert(s[r]);
        //     ans = max(ans, r - l + 1);
        // }

        // return ans;
    }
};