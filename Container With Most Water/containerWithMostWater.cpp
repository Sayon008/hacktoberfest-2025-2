Find two lines that together with the x-axis form a container, such that the container contains the most water.

T.C - O(n)
S.C - O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int maxWater = INT_MIN;

        int left = 0;
        int right = n - 1;

        while(left < right){
            int water = (right - left) * min(height[left], height[right]);

            maxWater = max(water, maxWater);

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }

        return maxWater;
    }
};
