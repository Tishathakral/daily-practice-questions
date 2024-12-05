/**
 * @param {string} start
 * @param {string} target
 * @return {boolean}
 */
var canChange = function(start, target) {
       let left = 0, right = 0;

       
        for (let i = 0; i < start.length; i++) {
            if (start[i] === 'R') {
                right++;
                if (left !== 0)
                    return false;
            } else if (start[i] === 'L') {
                left--;
            }
            if (target[i] === 'R') {
                right--;
            } else if (target[i] === 'L') {
                left++;
                if (right !== 0)
                    return false;
            }
            if (left < 0 || right < 0)
                return false;
        }
        return left === 0 && right === 0;

};