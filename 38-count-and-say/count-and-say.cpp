class Solution {
public:
    string countAndSay(int n) {
        string r="1";
        for(int i=1;i<n;i++){
            string t="";
            int count=1;
            for(int j=1;j<r.size();j++){
                if(r[j]==r[j-1]){
                    count++;
                }else{
                    t+=to_string(count)+r[j-1];
                    count =1;
                }
            }
            t+=to_string(count)+r.back();
            r=t;
        }
        return r;
        
    }
};