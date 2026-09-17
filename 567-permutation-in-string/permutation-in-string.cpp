class Solution {
public:
    bool checkfreq(string s1,string x)
    {
        if(s1.size() != x.size())
            return false;
        int freq[26]={0};
        for(int i=0;i<s1.size();i++)
        {
            freq[s1[i]-'a']++;
            freq[x[i]-'a']--;
        }
        for(auto it:freq)
        {
            if(it==0)
            continue;
            else
            return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int i=0;
        while(i<s2.size())
        {
            string x=s2.substr(i,n);
            if(checkfreq(s1,x))
            return true;
            else
            i++;   
        }
        return false;
    }
};