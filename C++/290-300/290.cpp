class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int temp;
        int LCM;
        int GCD;
        int A=a;
        int B=b;
        // case for having GCD
        while (B!=0){
        temp=B;
        B=A%B;
        A=temp;
        }
        
        GCD=A;
        //case for LCM
        LCM= (a/GCD)*b;
        
        return {LCM, GCD};
    }
};
