class Solution {
public:
    string convert(string s, int nr) {
        if(nr<=1) return s;
        vector<string>v(nr,"");
        int j=0,d=-1;
        for(int i=0;i<s.length();i++){
            if(j==nr-1 || j==0 ) d*=(-1);
            v[j]+=s[i];
            if(d==1) j++;
            else j--;
        }
        string r;
        for(auto &it :v) r+=it;
        return r;
        
    }
};