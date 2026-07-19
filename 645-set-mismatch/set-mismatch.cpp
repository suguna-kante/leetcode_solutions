class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        set<int>s;
        for(int x :nums){
            if(s.find(x)!=s.end()){
                v.push_back(x);
                
            }
            s.insert(x);
        }
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end()){
                v.push_back(i);
            }
        }
        return v;

        
        
    }
};