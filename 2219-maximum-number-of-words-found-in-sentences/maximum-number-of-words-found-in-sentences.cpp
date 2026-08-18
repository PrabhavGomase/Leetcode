class Solution {
public:
    int countwords(string s)
    {
        int count=1;
        for(int i=0;i<s.size();i++)
        {
        if(s[i]==' ')
        count++;
        }
        return count;
    }
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(int i=0;i<sentences.size();i++)
        {
            maxi=max(maxi,countwords(sentences[i]));
        }
        return maxi;
    }
};