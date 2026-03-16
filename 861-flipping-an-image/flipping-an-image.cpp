class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        vector<vector<int>>ans;
        for(int i=0;i<a.size();i++){
            vector<int>r;
            for(int j=a.size()-1;j>=0;j--){
                if(a[i][j]==0){
                    r.push_back(1);
                }else{
                    r.push_back(0);
                }
            }
            ans.push_back(r);
        }
        return ans;
        
    }
};