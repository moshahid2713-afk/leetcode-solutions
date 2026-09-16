#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};

// Test Case 1 (Typical):
// Input: [7,1,5,3,6,4]
// Expected Output: 5

// Test Case 2 (Edge Case):
// Input: [7,6,4,3,1]
// Expected Output: 0