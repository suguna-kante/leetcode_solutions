class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
       vector<int>v;
       int s=n.size();
       int l=0;
       int r=s-1;
       int sum=0;
       while(l<=r){
        sum=n[l]+n[r];
        if(sum==t){
            return {l+1,r+1};
        }
        else if(sum>t){
            r--;
        }
        else{
            l++;
        }
       }
       return {};

        
    }
};