class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) 
            return false;

        int reversed = 0;
        int org = x;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check for overflow before updating reversed
            if (reversed > (INT_MAX / 10) || (reversed == INT_MAX / 10 && digit > 7)) 
                return false; // Overflow would occur
            
            reversed = reversed * 10 + digit;
        }

        return org == reversed;
    }
};
