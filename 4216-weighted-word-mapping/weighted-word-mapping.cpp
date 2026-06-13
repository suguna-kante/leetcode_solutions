class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string r(words.size(),0);
        int i=0;
        for(auto& word : words){
            int s=0;
            for(auto& c : word){
                s+=weights[(c & 31)-1];
            }
            int q=(s*2521)>>16;
            int re=s-q*26;
            r[i++]='z'-re;
        }
        return r;
        
    }
};