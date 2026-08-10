class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        string mid="";string left="";
        if(n==1)
        return s;
        vector<int>freq(26,0);
        for(int i=0;i<n/2;i++)
        {
            freq[s[i]-'a']++;
        }
        int index=0;
        for(int i=0;i<26;i++)
        {
            while(freq[i]-->0)
            {
                s[index++]=(char)(i+'a');
            }
        }
        for(int i=0;i<n/2;i++)
        {
            s[n-i-1]=s[i];
        }
        return s;
        // for(int i=0;i<26;i++)
        // {
        //     if(freq[i]%2!=0)
        //         mid=char(i+'a');
        //     left.append(freq[i]/2,char(i+'a'));
        // }
        // string right=left;
        // reverse(right.begin(),right.end());
        // return left+mid+right;






        // if(n%2!=0)
        // {
        //     sort(s.begin(),s.begin()+n/2);
        //     sort(s.begin()+n/2+1,s.end());
        //     reverse(s.begin()+n/2+1,s.end());
        // }
        // else
        // {
        //     sort(s.begin(),s.begin()+n/2);
        //     sort(s.begin()+n/2,s.end());
        //     reverse(s.begin()+n/2,s.end());
        // }
        // return s;
    }
};