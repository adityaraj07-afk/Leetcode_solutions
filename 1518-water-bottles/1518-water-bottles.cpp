class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int empty = numBottles;

        while (empty >= numExchange) {
            int first = empty / numExchange;
            int second = empty % numExchange;

            ans += first;
            empty = first + second;
        }

        return ans;
    }
};