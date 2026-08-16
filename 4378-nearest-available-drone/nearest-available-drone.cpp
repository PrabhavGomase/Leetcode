class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int m=drones.size();
        int near=INT_MAX;
        for(int i=0;i<m;i++)
        {
                int st1=abs(drones[i][0]-target[0]);
                int st2=abs(drones[i][1]-target[1]);
                if(st1+st2<=drones[i][2])
                {
                    near=min(near,st1+st2);
                }
        }

        for(int i=0;i<m;i++)
        {
            int st1=abs(drones[i][0]-target[0]);
            int st2=abs(drones[i][1]-target[1]);
            if(st1+st2==near && st1+st2<=drones[i][2] )
                return i;
        }
    return -1;
    }
};