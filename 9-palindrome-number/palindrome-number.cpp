class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long int rev = 0;

        while (x > 0) {
            int dig = x % 10;
            rev = (rev * 10) + dig;
            x /= 10;
        }

        if (num == rev)
            return 1;
        return 0;
    }
};