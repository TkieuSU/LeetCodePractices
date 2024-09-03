class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";

        // In case string 1 is shorter or both words are equal
        if (word1.length() <= word2.length()) {
            // Use length of word 1 too loop through both words
            for (int i = 0; i < word1.length(); i++) {
                result.push_back(word1[i]);
                result.push_back(word2[i]);
            }
            // In case the 
            if (word1.length() < word2.length()){
                for (int i = word1.length(); i < word2.length(); i++) {
                    result.push_back(word2[i]);
                }
            }
        }

        // In case string 2 is shorter
        else {
            for (int i = 0; i < word2.length(); i++) {
                result.push_back(word1[i]);
                result.push_back(word2[i]);
            }
            for (int i = word2.length(); i < word1.length(); i++) {
                result.push_back(word1[i]);
            }
        }
        return result;
    }
};
