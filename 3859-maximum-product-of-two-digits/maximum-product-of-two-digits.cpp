class Solution {
public:
    int maxProduct(int n) {
        int m=0,m2=0;
        while(n>0){
            int r=n%10;
            if(r>m){
                m2=m;
                m=r;
            }else if(r>=m2){
                m2=r;
            }
            n/=10;
        }
        return m*m2;
    }
};