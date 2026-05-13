class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>a;
        unordered_map<char,char>p;
        for(int i=0;i<s.length();i++){
            char sc=s[i],tc=t[i];
            if(a.count(sc) && a[sc]!=tc) return false;
            if(p.count(tc) && p[tc]!=sc) return false;
            a[sc]=tc;
            p[tc]=sc;
        }
        return true;
        
    }
};