class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int maxAltitude = 0;

        for (int i = 0; i < gain.size(); i++) {
            // Keep track of the altitude gain or loss
            altitude += gain[i];
            // Compare and keep track of the max altitude gain
            maxAltitude = max(altitude, maxAltitude);
        }
        return maxAltitude;
    }
};
