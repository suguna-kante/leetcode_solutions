class Solution {
public:
    int strStr(string s, string p) {
        for(int i=0;i+p.size()<=s.size();++i){
            if(s.substr(i,p.size())==p){
                return i;
            }
        }
        return -1;

        
    }
};