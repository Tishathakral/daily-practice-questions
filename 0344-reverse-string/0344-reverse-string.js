/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    let k = s.length-1;
    let i = 0;
    let temp;

    while(i<=k){
        temp = s[i]
        s[i] = s[k]
        s[k] = temp
        i++
        k--
    }
};