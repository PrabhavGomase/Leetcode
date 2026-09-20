class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<int>f;
        int count=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
                count++;
            else
            {
                f.push_back(count);
                count=1;
            }
        }
        f.push_back(count);
    sort(f.begin(),f.end());
    int ans=f.size();
    for(int i=0;i<f.size();i++)
    {
        if(k>=f[i])
        {
            k-=f[i];
            ans--;
        }
        else
        break;
    }
    return ans;







//         unordered_map<int,int>mp;
//         vector<int>store(arr.size()+1,0);
//         for(int i=0;i<arr.size();i++)
//         {
//            mp[arr[i]]++;
//         }
//         for(auto it:mp)
//         {
//             store[it.second]++;
//         }
//         int ans=mp.size();
//         for(int i=1;i<store.size();i++)
//         {
//             int cost=i*store[i];
//             if(k>=cost)
//             {
//                 k-=cost;
//                 ans-=store[i];
//             }
//             else
//             {
//                 ans-=k/i;
//                 break;
//             }
//         }
// return ans;
        // for(auto it:mp)
        // {
        //     store.push_back(it.second);
        // }
        // sort(store.begin(),store.end());
        //  int i=0;
        // while(i<store.size() && k>=store[i])
        // {
        //     k-=store[i];
        //     i++;
        // }
        // return store.size()-i;
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