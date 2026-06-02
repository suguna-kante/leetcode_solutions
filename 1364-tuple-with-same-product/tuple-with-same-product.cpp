class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        int a=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                a+=m[nums[i]*nums[j]]++;
            }
        }
        return 8*a;
        
    }
};