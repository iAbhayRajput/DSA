class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        int xorAll=0;
        for (int nums:arr) xorAll ^=nums;
        int setBit= xorAll & (-xorAll);
        int x=0,y=0;
        for (int num:arr){
            if(num & setBit){
                x^=num;
            }
            else{
                y^=num;
            }
        }
        vector <int>ans={x,y};
        sort(ans.begin(),ans.end());
        return ans;
    }
};
