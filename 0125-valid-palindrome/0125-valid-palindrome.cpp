class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        // Step 1: keep only letters/digits, converted to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }

        // Step 2: reverse the cleaned string
        string rev = clean;
        reverse(rev.begin(), rev.end());

        // Step 3: compare
        return clean == rev;
    }
};