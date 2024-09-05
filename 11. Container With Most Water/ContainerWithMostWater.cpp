class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftPtr = 0;
        int rightPtr = height.size() - 1;

        int maxContainer = 0;

        while (leftPtr <= rightPtr) {
            int length = rightPtr - leftPtr;
            int currentContainer = min(height[leftPtr], height[rightPtr]) * length;

            maxContainer = max(currentContainer, maxContainer);

            if (height[leftPtr] < height[rightPtr]) {
                leftPtr++;
            }
            else {
                rightPtr--;
            }
        }
        return maxContainer;
    }
};
