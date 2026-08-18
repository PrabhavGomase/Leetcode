class Solution {
public:
    bool isPalindrome(string s)
    {
        int l=0,r=s.size()-1;
        while(l<r)
        {
            if(s[l]==s[r])
            {
                l++;r--;
            }
            else
            break;
        }
        if(l==s.size()/2)
        return true;
        return false;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(isPalindrome(words[i]))
                return words[i];
        }
        return "";
        
    }
};