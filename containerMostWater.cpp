//Two-pointer approach, maximizes the water area 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int cur=0;
        int i= 0, j=height.size()-1;
        while(i<j){
            cur = (j-i) * min(height[j],height[i]);
            maxArea = max(maxArea, cur);
            if(height[i] <= height[j]) i++;
            else j--; 
        }
        return maxArea;
    }
};
