class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int t) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=i;j<nums.size();j++){
                 if(nums[j]==t) c+=1;
                 else c-=1;
                if(c>0) s++;
            }
        }
        return s;
        
    }
};