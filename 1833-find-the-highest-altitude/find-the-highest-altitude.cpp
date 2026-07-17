class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>p(n+1);
         p[0]=0;
        for(int i=1;i<=gain.size();i++){
            p[i]=p[i-1]+gain[i-1];
        }
        return *max_element(p.begin(),p.end());
        
    }
};