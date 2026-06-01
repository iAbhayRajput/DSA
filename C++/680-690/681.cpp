class Solution {
  public:
    int findMaxProduct(vector<int>& arr) {
        // code here
        if(arr.size()==1) return arr[0];
        long long int MOD = 1e9+7,ans=1;
        int mini=1e9;
        bool neg = false,zero = false,changed = false;
        for(auto i : arr){
            if(i<0){
                neg=!neg;
                mini = min(mini,-i);
            }
            else if(!i) zero = true;
        }
        mini*=-1;

        for(auto i : arr){
            if(neg && mini==i) neg=!neg ;
            else if(i) ans = (ans*i)%MOD,changed = true;
        }
        return (int)changed?ans:zero?0:ans;
    }
};
