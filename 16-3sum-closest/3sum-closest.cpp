class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int r=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1,ri=nums.size()-1;
            while(l<ri){
                int s=nums[i]+nums[l]+nums[ri];
                if(abs(t-s)<abs(t-r))
                 r=s;
                if(s==t) return t;
                else if(s<t) l++;
                else ri--;

            }
        }
        return r;
        
    }
};