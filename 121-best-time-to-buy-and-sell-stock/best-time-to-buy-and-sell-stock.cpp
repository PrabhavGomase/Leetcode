class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int maxp=0;
        int minp=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minp)
                minp=prices[i];
            else
                maxp=max(maxp,prices[i]-minp); 
        }
return maxp;
        









//         int n=prices.size();
//         int minprice=INT_MAX;
//         int maxProfit=0;
//         for(int i=0;i<n;i++)
//         {
//             if(prices[i]<minprice)
//             minprice=prices[i];
//             else
//             maxProfit=max(maxProfit,prices[i]-minprice);
//         }

// return maxProfit;








        // int n=prices.size();
        // int cost,mini=prices[0],profit=0;
        // for(int i=1;i<n;i++)
        // {
        //     cost=prices[i]-mini;
        //     profit=max(profit,cost);
        //     mini=min(mini,prices[i]);
        //     }
        
    

        // return profit;
    }









        // int n=prices.size();
        // int cost;
        // int mini=prices[0];
        // int maxp=0;
        // for(int i=1;i<n;i++)
        // {
        //     cost=prices[i]-mini;
        //     maxp=max(cost,maxp);
        //     mini=min(mini,prices[i]);
        // }

        // return maxp;
        
    
};