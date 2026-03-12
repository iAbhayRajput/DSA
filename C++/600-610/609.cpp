class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        // code here
        int n= arr.size(), ans =0, currflips = 0;
        for (int i=0; i<n; i++){
            if (i>=k && arr[i-k]==2) currflips--;
            if ((arr[i]+currflips)%2==0) { if (i+k>n) return -1; currflips++; ans++; arr[i]=2;}
        }
        
        return ans;
    }
};
