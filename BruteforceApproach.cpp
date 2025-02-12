class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int length;
        int breadth;
        int max_area=INT_MIN;
        for(int i=0;i<n;i++){
            int area=1;
            for(int j=i+1;j<n;j++){
                length=min(height[i],height[j]);
                breadth=j-i;
                area=length*breadth;
                max_area=max(area,max_area);
            }
        }
        return max_area;
    }
};
