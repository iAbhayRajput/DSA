class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        int size=arr.size();
        if(size<2) return true;
        for (int i =1;i<size;i++){
            if(arr[i]<arr[i-1]) return false;
        }
        return true;
    }
};
