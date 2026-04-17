class Solution {
public:
    int reverse(int x){
        int r=0;
        while(x>0){
            r=r*10+x%10;
            x/=10;
        }
        return r;
    }
    int minMirrorPairDistance(vector<int>& a) {
        unordered_map<int,int>map;
        int n=a.size(),ans=1e6;
        for(int i=0;i<n;i++){
            if(map.count(a[i])){
                ans=min(ans,i-map[a[i]]);
            }
            map[reverse(a[i])]=i;
        }
        return ans==1e6 ? -1 : ans;
    }
};