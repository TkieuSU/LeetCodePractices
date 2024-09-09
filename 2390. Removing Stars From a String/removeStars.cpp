class Solution {
public:
    string removeStars(string s) {
        string result;

        // Push element into the result string
        for(int i = 0; i < s.length(); i++) {
            // If found a *. Pop the last character out of the result string
            if (s[i] == '*') {
                if (!result.empty()) {
                    result.pop_back();
                }
            }
            //Else, push new charater to the end of the result string
            else {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};
