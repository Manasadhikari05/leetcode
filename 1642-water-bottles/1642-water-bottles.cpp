class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=numBottles;
        int div,remainder;
        while(numBottles>=numExchange)
        {
            div=INT_MAX;
            div=numBottles/numExchange;
            remainder=numBottles%numExchange;
            numBottles=div+remainder;
            total+=div;
        }
        return total;
    }
};