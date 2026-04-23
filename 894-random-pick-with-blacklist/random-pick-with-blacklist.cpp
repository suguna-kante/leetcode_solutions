class Solution {
public:
    int s2;
    vector<int>nums;
    Solution(int n, vector<int>& bl) {
        n=min(100000,n);
        set<int>st(begin(bl),end(bl));
        for(int i=0;i<n;i++){
            if(not(st.count(i)))
                nums.push_back(i);
        }
        s2=nums.size();
        
    }
    
    int pick() {
        int idx=rand()%s2;
        return nums[idx];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */