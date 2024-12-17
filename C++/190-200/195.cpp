#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

bool check(vector<int>&stalls, int k, int mid){
        int count=0, prev=-1;
        for(int i=0;i<stalls.size();i++){
            if(prev==-1 || stalls[i]-prev>=mid){
                count++;
                prev=stalls[i];
            }
        }
        return count>=k;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int n=stalls.size();
        int lo=0, hi=stalls[n-1]-stalls[0];
        int ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(check(stalls, k, mid)){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
