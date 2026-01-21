/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let element = 0;
    for(let i=0;i<nums.length;i++){
       element = element ^ nums[i]
    }
    return element 
};