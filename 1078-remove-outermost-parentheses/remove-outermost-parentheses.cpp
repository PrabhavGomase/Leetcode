class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                if(count>0)
                    ans+=s[i];
                count++;
            }
            else if(s[i]==')')
            {
                count--;
                if(count>0) ans+=s[i];
            }
        }
        return ans;











        // int l=0;string r;
        // for(char ch:s)
        // {
        //     if(ch=='(')
        //     {
        //         if(l>0) r+=ch;
        //         l++;
        //     }
        //     else if(ch==')')
        //     {
        //         l--;
        //         if(l>0) r+=ch;
            
        //     }
           

        // }

//  return r;




        // int p=s.length();
        // int c=0,d=0;
        // string l="";
        // for(int i=0;i<p;i++)
        // {
        //     if(s[i]=='(')
        //     c++;
        //     else if(s[i]==')')
        //     d++;
        //     if(c==d)
        //     {
        //         l+=s.substr(i-c-d+2,c+d-2);
        //         // b=a.substr(1,s.size()-2);
        //         // l+=a;
        //         c=0;d=0;
        //     }
        // }
        // if(l.empty())
        // return "";
        // else
        // return l;
    }
};