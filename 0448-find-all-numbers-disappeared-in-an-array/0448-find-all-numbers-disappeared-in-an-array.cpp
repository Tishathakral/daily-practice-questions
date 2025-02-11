class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        set<int> unique_nums(nums.begin(), nums.end());  // Store unique numbers using set

        // Check numbers from 1 to n
        for (int i = 1; i <= nums.size(); i++) {
            if (unique_nums.find(i) == unique_nums.end()) {  // If number is not found in set
                ans.push_back(i);  // It's missing, so add it to the result
            }
        }

        return ans;
    }
};
