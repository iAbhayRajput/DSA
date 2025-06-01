class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        int n = mat2.size();
        int cnt = 0;
        int onex = 0, oney = 0, twox = n-1, twoy = n-1;
        while(onex <= n-1 && oney <= n-1 && twox >= 0 && twoy >= 0){
            int sum = mat1[onex][oney] + mat2[twox][twoy];
            if(sum == x){
                cnt++;
                oney++;
                if(oney == n){
                    oney = 0;
                    onex++;
                }
                twoy--;
                if(twoy == -1){
                    twoy = n-1;
                    twox--;
                }
            }
            else if(sum < x){
                oney++;
                if(oney == n){
                    oney = 0;
                    onex++;
                }
            }
            else {
                twoy--;
                if(twoy == -1){
                    twoy = n-1;
                    twox--;
                }
            }
        }
        return cnt;
    }
};
