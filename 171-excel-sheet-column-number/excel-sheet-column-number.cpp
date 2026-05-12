class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long a=0;
        for(char ch : columnTitle){
            a=a*26+(ch-'A'+1);
        }
        return (int)a;
    }
};