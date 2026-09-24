class Solution {
public:
    vector<int> twoSum(vector<int>& ns, int target) {
        int n=ns.size();
        int low=0,high=n-1;
        while(low<high){
            int mid=(ns[low]+ns[high]);
            if(mid==target){
                return {low+1,high+1};
            }else if(mid<target){
                low++;
            }else{
                high--;
            }
        }
        return {-1,-1};
    }
};