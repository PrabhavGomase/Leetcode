class Solution {
public:
    int ischeck(int a, int b) {
        while (a > 0 || b > 0) {
            if (a > 0) {
                int d1 = a % 10;
                if (d1 == 0)
                    return true;
                a /= 10;
            }
            if (b > 0) {
                int d2 = b % 10;
                if (d2 == 0)
                    return true;
                b /= 10;
            }
        }
         return false;
    }

        vector<int> getNoZeroIntegers(int n) {
            for (int i = 1; i <= n; i++) {
                int a = i;
                int b = n - i;
                if (ischeck(a, b))
                    continue;
                else
                    return {a, b};
            }
            return {0, 0};
        }
    };