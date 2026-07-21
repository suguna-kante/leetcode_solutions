class Solution {
public:
    int maxpair(int num){
        int c=0;
        while(num>0){
            int d=num%10;
            c+=d;
            num/=10;
        
        }
        return c;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++){
            int r=maxpair(nums[i]);
            m[r].push_back(nums[i]);

        }
        int maxr=-1;
        for(auto &it : m){
            vector<int>&v=it.second;
            sort(v.begin(),v.end());
            if(v.size()>=2){
                
                int n=v.size();
                maxr=max(maxr,v[n-1]+v[n-2]);
            }
        }
        return maxr;
    }
};