class Solution {
public:
    int findRadius(vector<int>& hs, vector<int>& hrs) {
        sort(hs.begin(),hs.end());
        sort(hrs.begin(),hrs.end());
        int n=hrs.size();
        int j=0,c=0;
        for(int h:hs){
            while(j<n-1 && abs(hrs[j+1]-h)<=abs(hrs[j]-h)){
                j++;
            }
            c=max(c,abs(h-hrs[j]));
        }
        return c;
        
    }
};