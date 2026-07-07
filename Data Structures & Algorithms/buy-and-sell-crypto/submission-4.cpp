class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int maxP=0;
        for (auto i: prices) {
            maxP = max(maxP, i-buy);
            buy = min(i, buy);
        }
        return maxP;
    }
};
