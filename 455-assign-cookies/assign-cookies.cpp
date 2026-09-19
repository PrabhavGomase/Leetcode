class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        long long i=0,j=0,ans=0;
        int n1=g.size(),n2=s.size();

        int diff=0;
        while(i<n1 && j<n2)
        {
            if(g[i]<=(diff+s[j]))
            {
                ans++;
                diff=s[j]-g[i];
                i++;
                j++;
            }
            else 
            {
                j++;
            }
        }
        return ans;
    }
};