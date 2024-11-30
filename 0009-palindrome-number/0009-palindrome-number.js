/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if (x < 0 || (x % 10 === 0 && x !== 0)) {
        return false;
    }

    let reversed = 0;
    let original = x;

    while (x > 0) {
        let digit = x % 10;
        x = Math.floor(x / 10);

        // Check for overflow before updating reversed
        if (reversed > (Number.MAX_SAFE_INTEGER / 10)) {
            return false; // Overflow would occur
        }

        reversed = reversed * 10 + digit;
    }

    return original === reversed;
};
