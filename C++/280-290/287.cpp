    class Solution {
      public:
        // Function to count the number of digits in n that evenly divide n
        int evenlyDivides(int n) {
            if(n==0) return 0;
            int count=0;
            int n2=n;
            while(n>0){
               int d=n%10;
                n=n/10;
               if(d==0){
                   continue;
               }
                if(n2%d==0){
                    count++;
                }
            }
            return count;
        }
    };
