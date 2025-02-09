class Solution {
public:
    bool check(vector<int>& nums) {
        int pairSum = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                pairSum++;
             if(pairSum == 2){
                return false;
            }

          }
        }
        return true;
    }
};