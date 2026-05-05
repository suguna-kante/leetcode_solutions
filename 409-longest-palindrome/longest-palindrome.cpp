class Solution {
public:
    int longestPalindrome(string s) {
        int o=0;
        unordered_map<char,int>v;
        for(char ch :s){
            v[ch]++;
            if(v[ch]%2==1){
                o++;
            }else{
                o--;
            }
        }
        if(o>1) 
           return s.length()-o+1;
        return s.length();
        
    }
};