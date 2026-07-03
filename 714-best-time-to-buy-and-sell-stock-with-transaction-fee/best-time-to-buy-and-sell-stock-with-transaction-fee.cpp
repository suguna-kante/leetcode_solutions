class Solution {
public:
    int maxProfit(vector<int>& p, int fee) {
        int b=INT_MIN;
        int s=0;
        for(int i:p){
            b=max(b,s-i);
            s=max(s,b+i-fee);
        }
        return s;
    }
};