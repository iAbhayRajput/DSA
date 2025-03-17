class Solution {
public:
    int reverse(int x) {
        int temp;
        int reverse= 0;
            temp=x;
            while(temp!=0){
            int digit= temp%10;
            temp=temp/10;
                        if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && digit > 7)) return 0;
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && digit < -8)) return 0;
            reverse=digit + reverse*10;
        }
        return reverse;

    }
};
