class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int replacement = INT_MIN;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int found = INT_MIN;
        for(int i=0;i<nums1.size();i++){
            int value = nums1[i];
            if(nums1[i]==found){
                continue;
            }

         
            for(int j=0;j<nums2.size();j++){
                if(value==nums2[j]){
                    result.push_back(value);
                    found = value;
                    break;
                }
            }
        }
       return result;
    }
};