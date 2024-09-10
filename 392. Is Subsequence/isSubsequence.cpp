class Solution {
public:
    bool isSubsequence(string s, string t) {
        //Pointer to keep track of the subsequence
        int sPtr = 0;

        for (int i = 0; i < t.length(); i++) {
            // Check if all charactersin subsequence matched with string t
            if (sPtr == s.length()) {
                return true;
            }

            // If the next character in string t matched with charater in subsequence,
            // We increament the pointer of subsequence to check for the next character
            if (t[i] == s[sPtr]) {
                sPtr++;
            }
        }
        return sPtr == s.length();
    }
};
