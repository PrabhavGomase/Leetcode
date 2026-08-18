class Solution {
public:
    bool isPalindrome(string s)
    {
        string t=s;
        reverse(s.begin(),s.end());
        if(s==t)
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