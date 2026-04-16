class Solution {
  public:
    
    long long fun(int ptr,string &s){
        int count = 0;
        long long  ans=0;
        
        while(ptr<s.size()){
            
            if(s[ptr]=='0' || s[ptr]=='1' ||s[ptr]=='2' ||s[ptr]=='3' ||s[ptr]=='4' ||s[ptr]=='5' ||s[ptr]=='6' ||s[ptr]=='7' || s[ptr]=='8' ||s[ptr]=='9'){
                count++;
                if(count>10){return -1;} // if num greater then int
                
                ans*=10;
                ans+=(s[ptr]-'0');
                ptr++;
            }
            else break;
            
        }
        
        
        return ans;
    }
    
    int myAtoi(string &s) {
        // code here
        int n = s.size();
        bool sign = 0;
        int ptr = 0;
        
        while(ptr<n){ // skip front spaces
            if(s[ptr]==' ')ptr++;
            else break;
        }
        
        if( ptr<n && s[ptr]=='-'){sign=1;ptr++;} // check num positive or not
        if( ptr<n && s[ptr]=='+'){ptr++;}
        
        while(ptr<n){ // skip front zeros
            if(s[ptr]=='0')ptr++;
            else break;
        }
        
        
        if(sign){
            
            long long a = fun(ptr,s);
            if(a==-1) return -2147483648;
            if(a>=2147483648)return -2147483648;
            return -int(a);
            
        }
        else{
            
            long long a = fun(ptr,s);
            if(a==-1) return 2147483647;
            if(a>=2147483647)return 2147483647;
            return int(a);
            
        }
        
        return 0;
        
    }
};
