class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int s=0;
        int m=0;
        for(int j=k;j<nums.size();j++){
            s=max(s,nums[j-k]);
            m=max(m,s+nums[j]);
        }
        return m;
       
        
        
    }
};