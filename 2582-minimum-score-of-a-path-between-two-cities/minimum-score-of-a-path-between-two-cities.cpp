class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<int> root(n+1);
        iota(root.begin(),root.end(),0);
        auto find=[&](this auto& self,int i)->int{
            return root[i]==i?i : root[i]=self(root[i]);
        };
        for(auto& r : roads){
            root[find(r[0])]=find(r[1]);
        }
        int r=10001;
        for(auto& re:roads){
            if(find(re[0])==find(1)){
                r=min(r,re[2]);
            }
        }
        return r;

        
    }
};