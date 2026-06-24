class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,s=0;
        for(auto& i : gain){
            s+=i;
            int d=s-a;
            a+=d & ~(d>> 0x1F);
        }
        return a;
        
    }
};