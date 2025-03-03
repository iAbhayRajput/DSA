lass Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        deque<int>,imdq,maxdq;
        int s=0,e=0;
        int anStart=0,ansEnd=0;
        vector<int>ans;
        int n= arr.size();
        while(e<n){
            while(!mindq.empty()&& arr[mindq.back()]>arr[e]) mindq.pop_back();
            while(!mindq.empty()&& arr[maxdq.back()]<arr[e]) maxdq.pop_back();
            mindq.push_back(e);
            maxdq.push_back(e);
            
            while(arr[maxdq.front()]-arr[mindq.front()]>x){
                if(s==maxdq.front()) maxdq.pop_front();
                if(s==mindq.front()) mindq.pop_front();
                s++
            }
            if(e-s>ansEnd-ansStart){
                ansEnd=e;
                ansStart=s;
            }
            e++;
        }
        for (int i = ansStart;i<=ansEnd;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
