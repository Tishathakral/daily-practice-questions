class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int w,h,area=INT_MIN;
        while(l<r){
            w= r-l;
            h=min(height[l],height[r]);
            area=max(area,(h*w));
            if(height[l]<height[r]){
                l++;
            }
            else if(height[l]==height[r]){
                l++;
                r--;
            }
            else{
                r--;
            }
        }
        return area;
    }
};