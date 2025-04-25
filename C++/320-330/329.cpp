class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int number=-1,count=0;
        for(int num:arr){
            if(count ==0){
                number=num;
            }
            count +=(num==number)?1:-1;
        }
        count=0;
        for(int num:arr){
            if(num==number) count++;
        }
        if (count>arr.size()/2) return number;
        else return -1;
    }
};
