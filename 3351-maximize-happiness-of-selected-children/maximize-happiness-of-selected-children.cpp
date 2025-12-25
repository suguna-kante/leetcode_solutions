class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(),h.end(),greater<int>());
        long long t=0;
        for(int i=0;i<k;++i){
            int c=h[i]-i;
            if(c<=0)
             break;
            t+=c;
        }
        return t;

        
    }
};