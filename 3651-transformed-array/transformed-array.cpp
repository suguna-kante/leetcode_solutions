class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int a=(int)nums.size();
        vector<int>v(a);
        for(int i=0;i<a;i++){
            v[i]=nums[((i+nums[i]%a+a)%a)];
        }
        return v;
        
    }
};