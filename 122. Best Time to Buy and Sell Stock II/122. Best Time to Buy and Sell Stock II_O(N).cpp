class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()==0 )return 0;
        int earn = 0;
        for (int i = 1; i<prices.size(); i++){
            if (prices[i]>prices[i-1]){
                earn = earn + prices[i]-prices[i-1];
            }
        }
        return earn;
    }
};
