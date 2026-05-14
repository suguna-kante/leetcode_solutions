class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        vector<int> f(n+1,0);
        for(int x : nums){
            if(x>n-1)  
              return false;
            f[x]++;
        }
        for(int i=1;i<=n-2;i++){
            if(f[i]!=1)
                return false;
        }
        return f[n-1]==2;
        

        
    }
};