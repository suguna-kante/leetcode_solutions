class Solution {
public:
    bool isTrionic(vector<int>& n) {
        int i=1,r=n.size();
       while(i<r && n[i-1]<n[i] ) i++;
       int p=i-1;
       while(i<r && n[i-1]>n[i]) i++;
       int q=i-1;
       while(i<r && n[i-1]<n[i]) i++;
       int f=i-1;
       return (p!=0) && (q!=p) && (f==r-1 && f!=q);
    }
};