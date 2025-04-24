class Solution {
  public:
    int getSingle(vector<int> &arr) {
        int bitCount [32]={0};
        for (int num:arr){
            for(int i=0;i<32;i++){
                if (num & (1<<i)){
                    bitCount[i]++;
                }
            }
        }
        int result=0;
        for (int j=0;j<32;j++){
            if(bitCount[j] % 3 != 0){
                result |= (1<<j);
            }
        }
        // if(result&(1<<31)){
        //     result-=(1LL<<31);
        // }
        return static_cast<int32_t>(result);
    }
};
