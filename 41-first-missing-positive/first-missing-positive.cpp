class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t=1;
        for(int i : nums){
            if(i>0 && i==t){
                t++;
            }else if(i>t){
                return t;
            }

        }
        return t;
        
    }
};