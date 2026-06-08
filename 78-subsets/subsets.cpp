class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>a={{}};
       for(int j : nums){
        int n=a.size();
        for(int i=0;i<n;i++){
            vector<int>m=a[i];
            m.push_back(j);
            a.push_back(m);
        }
       }
       return a;
    }
};