class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        vector<int>store;
        for(int i=0;i<arr.size();i++)
        {
           mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            store.push_back(it.second);
        }
        sort(store.begin(),store.end());
         int i=0;
        while(i<store.size() && k>=store[i])
        {
            k-=store[i];
            i++;
        }
        return store.size()-i;
//         vector<pair<int,int>> v(mp.begin(), mp.end());
// sort(v.begin(), v.end(), [](auto &a, auto &b) {
//     return a.second < b.second;
// });
//     int ans=0;
//         for(int i=0;i<v.size();i++)
//         {
                    
//             if(k<=0 && i<v.size())
//             { 
//                 ans++;
//             }
//             else
//             {
//                 k=k-v[i].second;
//                 if(k<0)
//                 ans=1;
//                 else
//                 ans=0;
//             }

//         }
//         return ans;
        
        
        
    }
};