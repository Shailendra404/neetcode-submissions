class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int md=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<prices[buy])
            {
                buy=i;
            }
            else{
                int d=prices[i]-prices[buy];
                md=max(d,md);
            }
        }
        return md;
    }
};
