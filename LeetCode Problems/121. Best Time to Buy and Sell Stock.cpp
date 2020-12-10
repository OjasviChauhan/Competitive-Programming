class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sellingPrice = 10000;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<sellingPrice){
                sellingPrice = prices[i];
            }
            int profit = prices[i]-sellingPrice;
            maxProfit = max(maxProfit,profit);
        }
        return maxProfit;
    }
};
