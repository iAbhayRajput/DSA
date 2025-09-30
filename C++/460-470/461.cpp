class Solution {
  public:
    vector<string> binstr(int n) {
        
        int N = 1 << n;
        
        vector<string> res;
        res.reserve(N);
        
        for(int i=0;i<N;i++){
            string str{""};
            for(int j = n-1; j >= 0;j--){
                if((i & (1 << j))){
                    str +='1';
                }else{
                    str +='0';
                }
            }
            res.push_back(str);
        }
        
        return res;
        
    }
};
