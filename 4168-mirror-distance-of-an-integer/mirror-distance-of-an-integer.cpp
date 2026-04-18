class Solution {
public:
    int mirrorDistance(int n) {
        int c=n;
        int r=0;
        while(c>0){
            r=r*10+c%10;
            c/=10;
        }
        
        return abs(n-r);
        
    }
};