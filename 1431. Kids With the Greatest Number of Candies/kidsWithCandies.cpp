class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxNum = 0;
        vector<bool> result(candies.size());

        // Find the max candies within the array
        for(int i = 0; i < candies.size(); i++) {
            maxNum = max(maxNum, candies[i]);
        }

        // Fill in the boolean list
        for(int i =0; i < candies.size(); i++) {
            // Answer true or false if the candies + extraCandies is more than maxCandies
            result[i] = (candies[i] + extraCandies) >= maxNum;
        }
        return result;
    }
};
