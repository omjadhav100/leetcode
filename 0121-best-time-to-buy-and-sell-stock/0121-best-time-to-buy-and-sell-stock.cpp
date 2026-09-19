

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice=prices[0];
       int profit=0;

       for(int i=1;i<prices.size();i++){
          if(prices[i]<minPrice){
            minPrice=prices[i];
          }
          else{
            profit=max(profit,prices[i]-minPrice);
          }
       }
       return profit;
    }
};

// int main() {
//     Solution s;  //  Create object
//     vector<int> prices = {7, 1, 5, 3, 6, 4};
//     cout << s.maxProfit(prices);
//     return 0;
// }
