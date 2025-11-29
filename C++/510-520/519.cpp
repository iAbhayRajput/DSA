class Solution
{
public:
    int countSetBits(int n)
    {
        int ans = 0;
        n++;
        for (int i = 1; i <= 30; i++)
        {
            int q = n / (1 << i);
            int r = n % (1 << i);
            ans += q * (1 << (i - 1));
            ans += max(0, r - (1 << (i - 1)));
        }
        return ans;
    }
};
