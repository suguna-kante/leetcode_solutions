class Solution {
public:
    int myAtoi(string s) {
        int n=s.size(),i=0,sn=1;
        long r=0;
        while(i<n && (s[i]==' ')){
            i++;
        }
        if(s[i]=='-'|| s[i]=='+'){
            if(s[i]=='-')
             sn=-1;
            i++;
        }
        while(i<n && isdigit(s[i])){
            r=r*10+(s[i]-'0');
            if(sn*r>=INT_MAX)
             return INT_MAX;
            if(sn*r<=INT_MIN)
             return INT_MIN;
            i++;
        }
        return sn*r;
        
    }
};