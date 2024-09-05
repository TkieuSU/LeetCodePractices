class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        //Turn the vectors into sets since sets have better lookup time
        //And it also helps avoid duplicates
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        // Return lists
        vector<int> list1;
        vector<int> list2;

        // If nums in set 1 doesn't exist in set 2 then add to list 1 return list
        for (int nums: set1) {
            if (set2.find(nums) == set2.end()) {
                list1.push_back(nums);
            }
        }

        // If nums in set 2 doesn't exist in set 1 then add to list 2 return list
        for (int nums: set2) {
            if (set1.find(nums) == set1.end()) {
                list2.push_back(nums);
            }
        }
        return {list1,list2};
    }
};
