class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int maxNumBottles=numBottles;
        while(numBottles>=numExchange){
            maxNumBottles+=numBottles/numExchange;
            numBottles=(numBottles%numExchange)+numBottles/numExchange;
        }
        return maxNumBottles;
    }
};