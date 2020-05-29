#include <limits>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = std::numeric_limits<int>::max();
        int earn = 0;
        for (int i=0; i<prices.size(); i++){
            if (prices[i]<min){
                min = prices[i];
            }
            else if (prices[i]-min >earn){
                earn = prices[i]-min;
            }
        }
        return earn;
    }
};
