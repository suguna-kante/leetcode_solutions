class Solution {
public:
    double angleClock(int hour, int mint) {
        double m=6.0*mint;
        double ha=30.0*(hour%12)+0.5*mint;
        double diff=abs(ha-m);
        return min(diff,360.0-diff);
        
    }
};