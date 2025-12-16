class Solution {
public:
    vector<int> getConcatenation(vector<int>& n) {
        vector<int>s;
        
        for(int i=0;i<n.size();i++){
            s.push_back(n[i]);
        }
        for(int j=0;j<n.size();j++){
            s.push_back(n[j]);
        }
        return s;
        
    }
};