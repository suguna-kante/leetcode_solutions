class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int c=0;
            while(num>0){
                int d=num%10;
                c+=d;
                num/=10;
            }

        num=c;
        }
        return num;
    }
};