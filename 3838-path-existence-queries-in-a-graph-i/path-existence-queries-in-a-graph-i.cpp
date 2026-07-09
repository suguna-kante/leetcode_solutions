class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int>c(n);
        for(int i=1;i<n;i++){
            c[i]=c[i-1]+(nums[i]-nums[i-1]>maxDiff);
        }
        vector<bool>r;
        for(const auto &q : queries){
            r.push_back(c[q[0]]==c[q[1]]);
        }
        return r;
        
    }
};