class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        int n=a.size();
        vector<int>pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;++i){
            pre[i]=pre[i-1]^a[i];
        }
        std::vector<int>r(q.size());
        for(int k=0;k<q.size();++k){
            int i=q[k][0];
            int j=q[k][1];
            if(i==0){
                r[k]=pre[j];
            }else{
                r[k]=pre[j]^pre[i-1];
            }
        }
        return r;

        
    }
};