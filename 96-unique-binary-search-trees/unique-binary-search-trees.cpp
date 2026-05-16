class Solution {
public:
    int numTrees(int n) {
        vector<int>t(n+1,1);
            for(int nodes=2;nodes<=n;nodes++){
                int total=0;
                for(int root=1;root<=nodes;root++){
                    total+=t[root-1]*t[nodes-root];
                }
                t[nodes]=total;
            }
        return t[n];
        
    }
};