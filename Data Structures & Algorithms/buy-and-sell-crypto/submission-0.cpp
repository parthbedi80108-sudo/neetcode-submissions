class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>max_price(n);
        vector<int>max_profit(n);
        for(int i=0;i<n;i++){
            max_price[i]=*max_element(prices.begin()+i,prices.end());
        }
        for(int i=0;i<n;i++){
            if(max_price[i]-prices[i]<1)max_profit[i]=0;
            else max_profit[i]=max_price[i]-prices[i];
        }
        return *max_element(max_profit.begin(),max_profit.end());
    }
};
