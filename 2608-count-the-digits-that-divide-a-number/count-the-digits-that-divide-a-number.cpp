class Solution {
public:
    int countDigits(int num) {
        int b=num;
        int c=0;
        while(num>0){
            int d=num%10;
           
            if(d!=0 && b%d==0){
                c++;
            }
             num/=10;
        }
        return c;
        
    }
};