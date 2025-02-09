class Solution {
public:
    void moveZeroes(vector<int>& arr) {
     int left = 0;
	 int right = left+1;

	 while(right<arr.size()){
		 if(left == right || arr[right]==0){
			 right++;
		 }
		 else if(arr[left]==0){
			swap(arr[left],arr[right]);
			left++;
			right++;
		 }
		 else {
			left++;
		}
	 }
    }
};