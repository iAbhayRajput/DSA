class Solution {
    private:
    vector<int> get_ans(vector<int> &arr1, vector<int> &arr2){
        vector<int> ans;
        int i=0;
        int j= 0;
        while(i<arr1.size() and j<arr2.size()){
            if(arr1[i]== arr2[j]){
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
            else if(arr1[i]< arr2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return  ans;
    }
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        vector<int> res1= get_ans(a, b);
        vector<int> res2= get_ans(res1, c);
        if(res2.empty()){
            return {};
        }
        
        vector<int> ans;
        ans.push_back(res2[0]);
        int i=1;
        while(i<res2.size()){
            if(res2[i]  != ans.back()){
                ans.push_back(res2[i]);
            }
            i++;
        }
        return ans;
    }
};

