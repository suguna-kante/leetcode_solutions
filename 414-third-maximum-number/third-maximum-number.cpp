class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(s.size()>=3){
            int t=s.size()-3;
            auto maxi=next(s.begin(),t);
            return *maxi;
        }
        return *--s.end();
        
        
    }
};