class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long r=0;
        int o=x;
        while(o!=0){
            int d=o%10;
            r=r*10+d;
            o/=10;
            
        }
       
       return r==x;
    }
};