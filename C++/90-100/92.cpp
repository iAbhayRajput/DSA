#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        long long sum=n*(n+1)/2;
        long long sum2=0;
        for(int i=0;i<arr.size();i++){
            sum2+=arr[i];
        }
        return int(sum-sum2);
    }
};

class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        long long sum=n*(n+1)/2;
        long long sum2=0;
        for(int i=0;i<arr.size();i++){
            sum2+=arr[i];
        }
        return int(sum-sum2);
    }
};
