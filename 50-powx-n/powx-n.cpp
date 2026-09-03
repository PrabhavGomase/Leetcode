class Solution {
public:
    double myPow(double x, int n) {
//             long long N=n;
//             if(N<0)
//             {
//                 x=1/x;
//                 N=-N;
//             }
// double ans=1;
//         for(int i=0;i<N;i++)
//         {
//             ans*=x;
//         }

// return ans;



        long long N = n; 
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1;
        while (N > 0) {
            if (N % 2 == 1) {
                result *= x;
            }
            x *= x;
            N /= 2;
        }
        return result;
    }
};