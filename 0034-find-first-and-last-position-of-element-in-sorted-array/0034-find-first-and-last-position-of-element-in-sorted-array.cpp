class Solution {
public:
    // Function to find the first occurrence of target
    int firstOcc(vector<int>& arr, int key) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2; // Correct mid calculation
            if (arr[mid] == key) {
                ans = mid;  // Record the position
                end = mid - 1;  // Look in the left half for earlier occurrences
            }
            else if (arr[mid] < key) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    // Function to find the last occurrence of target
    int LastOcc(vector<int>& arr, int key) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2; // Correct mid calculation
            if (arr[mid] == key) {
                ans = mid;  // Record the position
                start = mid + 1;  // Look in the right half for later occurrences
            }
            else if (arr[mid] < key) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
    
    // Main function to return the range of the target
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(firstOcc(nums, target));  // Find the first occurrence
        result.push_back(LastOcc(nums, target));   // Find the last occurrence
        return result;
    }
};
