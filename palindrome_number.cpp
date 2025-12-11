class Solution {
public:
    bool isPalindrome(int x) {
        long long num=x,r=0;
        while(x>0){
            r=r*10+x%10;
            x/=10;
        }
        if(num==r){
            return true;
        }
        else{
            return false;
        }  
    }
};