
/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let stack = [];
    for (let c of s) {
        if (c === '(' || c === '{' || c === '[') { 
            stack.push(c); 
        } else { // if the character is a closing bracket
            if (!stack.length || // if the stack is empty or 
                (c === ')' && stack[stack.length - 1] !== '(') || // the closing bracket doesn't match the corresponding opening bracket at the top of the stack
                (c === '}' && stack[stack.length - 1] !== '{') ||
                (c === ']' && stack[stack.length - 1] !== '[')) {
                return false; // the string is not valid, so return false
            }
            stack.pop(); // otherwise, pop the opening bracket from the stack
        }
    }
    return !stack.length; // if the stack is empty, all opening brackets have been matched with their corresponding closing brackets,
                          // so the string is valid, otherwise, there are unmatched opening brackets, so return false
};