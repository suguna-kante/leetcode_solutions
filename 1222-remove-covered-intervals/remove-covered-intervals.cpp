class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& i) {
        sort(i.begin(),i.end(),[](vector<int>& a,vector<int>& b){
            if(a[0]==b[0])
                return a[1]>b[1];
            return a[0]<b[0];
        });
        int c=0,m=0;
        for(auto& it : i){
            if(it[1]>m){
                c++;
                m=it[1];
            }
        }
        return c;
        
    }
};