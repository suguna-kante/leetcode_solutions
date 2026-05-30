class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>s;
        for(int i:nums){
            if(!s.insert(i).second) return i;
        }
        return -1;
        
    }
};