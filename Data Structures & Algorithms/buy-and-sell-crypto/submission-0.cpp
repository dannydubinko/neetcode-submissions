class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current_low = prices[0];
        int profit = 0;
        int temp = 0;

        for (int i = 1; i<prices.size(); i++){

            if (prices[i]<current_low){
                current_low = prices[i];
            } 

            temp = prices[i] - current_low;
            
            if (temp > profit){
                profit = temp;
            }
        }

        return profit;

    }
};
