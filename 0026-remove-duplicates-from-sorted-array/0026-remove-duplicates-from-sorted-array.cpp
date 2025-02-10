class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;  // Edge case: if the input is empty
        }
        
        int index = 1;  // Start from the second element
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {  // Compare with the previous element
                nums[index] = nums[i];  // Place the unique element at the correct position
                index++;  // Increment the index for the next unique element
            }
        }
        
        return index;  // Return the new length of the array without duplicates
    }
};
