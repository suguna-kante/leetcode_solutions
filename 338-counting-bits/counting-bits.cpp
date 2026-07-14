class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>a;
        for(int i=0;i<=n;i++){
            int s=0;
            int num=i;
            while(num!=0){
                s+=num%2;
                num=num/2;
            }
            a.push_back(s);
        }
        return a;
        
    }
};