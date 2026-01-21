/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let zeroes; 
    let k = 0
    for(let i=0; i<nums.length ;i++){
        if(nums[i]!=0){
           nums[k] = nums[i]
           k++;
        }
    }

    while (k < nums.length) {
    zeroes = 0;
    nums[k] = zeroes;
    k++;
  }
};