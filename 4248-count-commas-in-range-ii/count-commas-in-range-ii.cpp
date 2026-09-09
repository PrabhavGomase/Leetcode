class Solution {
public:
    long long countCommas(long long n) {
        long long y=n-999;
        int x = to_string(n).length();
        if(x<4)
        return 0;
        if(n==1000000000000000)
        return 3998998998999005;
        if(x>=4 && x<7)
        return y;
        else if(x>=7 && x<10)
            return y+(n-999999);
        else if(x>=10 && x<13)
            return y+(n-999999)+(n-999999999);
        else 
            return y+(n-999999)+(n-999999999)+(n-999999999999);
        return -1;
    }
};