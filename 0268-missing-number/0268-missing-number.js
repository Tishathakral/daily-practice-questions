/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let k = nums.sort((a,b)=>a-b)
    let missingNum;
    for(let i=0;i<nums.length;i++){
      if(nums[i]!=i){
        missingNum = i;
        return missingNum
      }
    }
    return nums.length;
};