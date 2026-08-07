class Solution {
public:
    int multiplication(int num)
    {
        int mul=1;
        while(num>0)
        {
            int digit=num%10;
            mul*=digit;
            num/=10;
        }
    return mul;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++)
        {
            if(multiplication(i)%t==0)
                return i;
        
        }
        return 0;
    }
};