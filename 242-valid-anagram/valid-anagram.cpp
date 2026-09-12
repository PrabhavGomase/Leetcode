class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26]={0};
        if(s.size()!=t.size())
        return false;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(auto it:freq)
        {
            if(it==0)
            continue;
            else return false;
        }
        return true;










    // int freq[26]={0};
    // if(s.size()!=t.size())
    // return false;
    // for(int i=0;i<s.size();i++)
    // {
    //     freq[s[i]-'a']++;
    //     freq[t[i]-'a']--;
    // }
    // for(int i=0;i<26;i++)
    // {
    //     if(freq[i]!=0)
    //     return false;
    // }
    // return true;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //    sort(s.begin(),s.end());
    //    sort(t.begin(),t.end());
    //    if(s==t)
    //    return true;
    //    else
    //    return false;
    
    }
};