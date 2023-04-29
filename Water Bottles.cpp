class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0;
        if(numBottles<numExchange){
            return numBottles;
        }
        int rem=0;
        while(numBottles+rem>=numExchange){
            ans+=numBottles;
            numBottles=numBottles+rem;
            rem=numBottles%numExchange;
            numBottles=numBottles/numExchange;
        }
        if(numBottles>0){
            ans+=numBottles;
        }
        return ans;
    }
};
