class Solution {
    int char2int(char c){
        switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
  public:
    int romanToDecimal(string &s) {
        int n = s.length();
        int res=0;
        for(int i=0; i<n; i++){
           if((i+1)<n && char2int(s[i]) < char2int(s[i+1])){
               res -= char2int(s[i]);
           } else{
               res += char2int(s[i]);
           }
        }
        return res;
    }
};
