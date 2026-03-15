class Solution {
public:
    int diagonalSum(vector<vector<int>>& a) {
        int n=a.size();
        int d1=0;
        for(int i=0;i<n;i++){
            d1+=a[i][i];
            d1+=a[i][n-i-1];
        }
        if(n%2!=0){
            d1-=a[n/2][n/2];
        }
        return d1;
        
    }
};