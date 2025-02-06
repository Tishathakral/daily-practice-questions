class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0; 
        int end = nums.size()-1;

        while(start<=end){
            if(nums[start]==target || nums[end]==target){
                return true;
                break;
            }
            else{
                start++;
                end--;
            }
        }

        return false;
    }
};