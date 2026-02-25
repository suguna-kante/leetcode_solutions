class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>o;
        o.emplace_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
            o.emplace_back(nums);
        return o;
    }
};