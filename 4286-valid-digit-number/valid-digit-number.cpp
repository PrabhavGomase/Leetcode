class Solution {
public:
    bool validDigit(int n, int x) {
        int c=0;

        while(n>=1)
        {
            if(n<=9 && n==x)
                return false;
            int digit=n%10;
            if(x==digit)
                c=1;
            n/=10;
        }
        if(c==1)
        return true;
    return false;
    }
};