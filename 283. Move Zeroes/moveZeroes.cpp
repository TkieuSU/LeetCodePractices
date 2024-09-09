class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Check if the size of the nums list is 1, then return
        if (nums.size() == 1) {
            return;
        }

        //Left pointer will keep track of the zeros
        //Move the left pointer to the first zeros in the list
        int leftPtr = 0;
        while (nums[leftPtr] != 0) {
            if (leftPtr == nums.size()-1) {
                return;
            }
            leftPtr++;
        }

        // Start looping through the list from the first zeros from the list
        // The right pointer will keep track of number different than zeros
        for (int rightPtr = leftPtr; rightPtr < nums.size(); rightPtr++) {
            // If found nonzeros, swap with the zeros with nonzeros 
            // And move the left pointer to the next zeros
            if (nums[rightPtr]) {
                nums[leftPtr] = nums[rightPtr];
                nums[rightPtr] = 0;
                leftPtr ++;
            }
        }
    }
};
