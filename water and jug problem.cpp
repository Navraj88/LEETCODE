class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        int a=jug1Capacity,b=jug2Capacity,c=targetCapacity;
        if(c>a+b){
            return false;
        }
        if(c%gcd(a,b)==0){
            return true;
        }
        return false;

    }
};
