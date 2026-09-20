class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            int a='z'-s[i]+1;
            int prd=(i+1)*a;
            sum+=prd;
        }
        return sum;
    }
};