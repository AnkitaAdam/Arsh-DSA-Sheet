class Solution {
public:
    int maxArea(vector<int>& height) {
       int start=0;
       int end=height.size()-1;
       int maxArea=INT_MIN;
       while(start<end){
            int area=min(height[start],height[end])*(end-start);
            maxArea=max(maxArea,area);
            if(height[start]<height[end]){
                start++;
            }else{
                end--;
            }
       }
       return maxArea;
    }
};