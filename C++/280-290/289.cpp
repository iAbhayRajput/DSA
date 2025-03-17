    class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0 || (x % 10 == 0 && x != 0)) return false;
            int temp;
            int reverse= 0;
                    temp=x;
            while(temp!=0){
                int digit= temp%10;
                temp=temp/10;
                if (reverse > (INT_MAX - digit) / 10) return false;
                                reverse= digit + reverse *10;
            }
            return x==reverse   ;
        }
};
