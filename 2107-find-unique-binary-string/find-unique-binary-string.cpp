class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string r;
        for(int i=0;i<nums.size();i++){
            r+=(nums[i][i]=='1') ? '0':'1';


        }
        return r;
    }
};