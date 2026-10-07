class Solution {
public:
//     int type2(string s)
//     {
//         int count=0;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='(')
//                 count++;
//         }
//         return 2*(count-1);
//     }
//     int type3(string s)
//     {
//          int count=0;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='(')
//                 count++;
//         }
//         return count;

//     }
    int scoreOfParentheses(string s) {
        int count=0,ans=0,c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                count++;
                c=count;
            }
            else if(s[i]==')')
            {
                if(c==count)
                {
                if(count==1)
                {
                    ans+=1;
                }
                else if(count>1)
                {
                    ans+=pow(2,count-1);
                }
                }
                count--; 
            }

        }
        return ans;


//         if (s.size()==2)
//             return 1;
//         if(s[0]==s[1])
//             return type2(s);
//         else
//             return type3(s);
//         return -1;
    }

};