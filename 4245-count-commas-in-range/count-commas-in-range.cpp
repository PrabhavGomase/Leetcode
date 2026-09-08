class Solution {
public:
    int countCommas(int n) {
        if(n<1000)
        return 0;
        else if(n>=1000 && n<=1000000)
        {
            int a=n-1000;
            return a+1;
        }
return 0;
    }
};