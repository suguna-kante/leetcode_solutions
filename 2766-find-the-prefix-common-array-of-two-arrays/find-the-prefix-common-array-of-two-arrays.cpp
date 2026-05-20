class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size(),c=0;
        vector<int>r(n);
        bitset<51>seen;
        for(int i=0;i<n;i++){
            c+=seen[A[i]];
            seen.set(A[i]);
            c+=seen[B[i]];
            seen.set(B[i]);
            r[i]=c;
        }
        return r;
        
    }
};