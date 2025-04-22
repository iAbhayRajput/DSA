class Solution {
  public:
    int findUnique(vector<int> &arr) {
        int xor1=0;
        for (int nums:arr) 
        {xor1^=nums;}
    return xor1;
    }
};
