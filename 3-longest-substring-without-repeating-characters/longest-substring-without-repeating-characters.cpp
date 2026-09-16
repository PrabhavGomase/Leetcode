class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256]={0};
        int l=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(freq[s[i]-0]==0)
            {
                freq[s[i]-0]++;
            }
            else
            {
                freq[s[i]-0]++;
                while(freq[s[i]-0]!=1)
                {
                    freq[s[l]-0]--;
                    l++;
                }

            }
            ans=max(ans,i-l+1);
        }
        return ans;

//         int l=0,ans=0;
//         unordered_set<char>st;
//         for(int i=0;i<s.size();i++)
//         {
//             while(st.count(s[i]))
//             {
//                 st.erase(s[l]);
//                 l++;
//             }
//             st.insert(s[i]);
//             ans=max(ans,i-l+1);
//         }

// return ans;




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