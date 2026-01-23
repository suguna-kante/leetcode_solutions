class Solution {
public:
    string defangIPaddr(string a) {
        string r="";
        for(int i=0;i<a.size();i++){
            if(a[i]== '.'){
                r+="[.]";
            }
            else {
                r+=a[i];
            }
        }
        return r;
    }
};