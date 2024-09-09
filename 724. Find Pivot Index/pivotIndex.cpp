class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumLeft = 0;
        int sumRight = 0;
        int totalSum = 0;

        // Find the total sum of the array
        for(int i = 0; i < nums.size(); i++){
             totalSum += nums[i];
        }

        // Iterate through the array to compare left and right sum
        for (int i = 0; i < nums.size(); i++) {
            // Calculate sum right
            sumRight = totalSum - sumLeft - nums[i];

            // Comparing sum left and sum right
            if (sumRight == sumLeft) {
                return i;
            }

            // If doesn't equal, add the next element to sum left
            sumLeft += nums[i];
        }

        return -1;
    }
};
