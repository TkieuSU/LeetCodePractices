class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a hash map to store numbers and its indices (number, indexes)
        unordered_map<int,int> number_indices_map;

        // Iterate throught the nums vector
        for (int i = 0; i < nums.size(); i++) {
            // In case we found the key with the compliment number
            if (number_indices_map.find(target - nums[i]) != number_indices_map.end()) {
                return {number_indices_map[target - nums[i]],i};
            }
            // Else add the number to number_indices_map
            number_indices_map[nums[i]] = i;
        }
        // Solution not found
        return {};
    }
};
