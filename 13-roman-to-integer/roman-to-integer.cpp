class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>v;
        v['I']=1;
        v['V']=5;
        v['X']=10;
        v['L']=50;
        v['C']=100;
        v['D']=500;
        v['M']=1000;
        int r=0;
        for(int i=0;i<s.length();i++){
            if(i+1<s.length() && v[s[i]]<v[s[i+1]]){
                r-=v[s[i]];
            }
            else{
                r+=v[s[i]];
            }
        }
        return r;
        
    }
};