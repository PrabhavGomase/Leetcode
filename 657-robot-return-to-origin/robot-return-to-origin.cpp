class Solution {
public:
    bool judgeCircle(string moves) {
        int c1=0,c3=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            c1++;
            else if(moves[i]=='D')
            c1--;
            else if(moves[i]=='L')
            c3++;
            else
            c3--;
        }
        if(c1==0 && c3==0)
        return true;
        return false;
    }
};