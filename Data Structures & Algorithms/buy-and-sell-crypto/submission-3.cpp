class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxP=0;
        int i=0,j=1;
        while (j < n ){
            if (prices[j] > prices[i]){
                maxP = max(maxP, prices[j] - prices[i]);
            }
            else {
                i = j;
            }
            j++;
        }
        return maxP;
    }
};
