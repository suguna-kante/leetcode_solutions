class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>m;
        for(int i=0;i<nums.size();i++){
                m.insert(m.begin()+index[i],nums[i]);
        }
        return m;
        
        
    }
};