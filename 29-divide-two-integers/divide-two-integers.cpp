class Solution {
public:
    int divide(int d, int di) {
        if(d==INT_MIN && di==-1)
         return INT_MAX;
        return d/di;
        
    }
};