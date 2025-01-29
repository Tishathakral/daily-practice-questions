class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());

      for(int i=0;i<n-2;i++){
        int b = i+1;
        int c = nums.size()-1;
        if(i>0 and nums[i]==nums[i-1] )continue;
        while(b<c){
          if(nums[i]+nums[b]+nums[c]==0){
          ans.push_back({nums[i],nums[b],nums[c]});
          while(b<c and nums[b]==nums[b+1]){
            b++;
          }          
          while(b<c and nums[c]==nums[c-1]){
            c--;
          }
          b++;
          c--;
        }
          else if(nums[i]+nums[b]+nums[c]<=0){
            b++;
          }
          else{
            c--;
          }
        }
      }
       return ans; 
    }
};