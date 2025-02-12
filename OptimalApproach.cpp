class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int length;
        int breadth;
        int left=0;
        int right=n-1;
        int max_area=INT_MIN;
        while(left<right){
            int area=1;
            length=min(height[left],height[right]);
            breadth=right-left;
            area=length*breadth;
            max_area=max(area,max_area);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return max_area;
    }
};
