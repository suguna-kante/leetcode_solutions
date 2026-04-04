class Solution {
public:
    string decodeCiphertext(string e, int rows) {
        int l=e.length();
        if(l==0) return "";
        int cols=l/rows;
        string a="";
        for(int j=0;j<cols;j++){
            for(int r=0,c=j;r<rows && c < cols;r++,c++){
                a.push_back(e[r*cols+c]);
            }
        }
        while(!a.empty() && a.back()==' '){
            a.pop_back();
        }
        return a;

        
    }
};