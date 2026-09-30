class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=nums[0],count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                el=nums[i];
            }
            if(el==nums[i])
                count++;
            else
                count--;
        }
        return el;

    }










//         int el;int count=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(count==0)
//                 el=nums[i];
//             if(nums[i]==el)
//             {
//                 count++;
//             }
//             else
//                 count--; 
//         }
// return el;
//     }

};






// int el;int count=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             if(count==0)
//             {
//                 el=nums[i];
//                 count=1;
//             }
//             else if(el==nums[i])
//                 count++;
//             else
//             count--;
//         }






        
//         // int el;
//         // int count=0;
//         // for(int i=0;i<nums.size();i++)
//         // {
//         //     if(count==0)
//         //     {
//         //     el=nums[i];
//         //     count=1;
//         //     }
//         //    else if(nums[i]==el)
//         //     {
//         //         count++;
//         //     }
//         //     else
//         //     {
//         //         count--;
//         //     }
            
//         // }
//         int h=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(el==nums[i])
//                 h++;
//         }
//         if(h>nums.size()/2)
//             return el;
//         return 0;



//         // unordered_map<int,int>map;
//         // int n=nums.size();
//         // for(int i=0;i<nums.size();i++)
//         // {
//         //     map[nums[i]]++;
//         // }
//         // for(auto it:map)
//         // {
//         //     if(it.second>n/2)
//         //     {
//         //         return it.first;
//         //     }
//         // }
//         // return 0;







//     }




















//         // int count=0;
//         // int el;
//         // for(int i=0;i<nums.size();i++)
//         // {
//         //     if(count == 0)
//         //     {
//         //         count=1;
//         //         el=nums[i];
//         //     }
//         //     else if(el==nums[i])
//         //     {
//         //         count++;
//         //     }
//         //     else
//         //     {
//         //         count--;
//         //     }
//         // }
//         // int c1=0;
//         // for(int i=0;i<nums.size();i++)
//         // {
//         //         if(el==nums[i])
//         //         {
//         //             c1++;
//         //         }
//         // }
//         // if(c1>nums.size()/2)
//         // return el;
//         // return 0;
//     //    sort(nums.begin(),nums.end());
//     //     return nums[nums.size()/2];
    
// };