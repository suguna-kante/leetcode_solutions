class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        vector<int>m=nums;
        map<int,int>mp;
        for(auto i : nums) mp[i]++;
        map<int,int>fre;
        for(auto j: mp){
            fre[j.second]++;
        }
        for(auto i : m){
            if(fre[mp[i]]==1) return  i;
        }
        return -1;
    }
};