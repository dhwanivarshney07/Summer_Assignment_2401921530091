class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1);
        int start = 0;
        int maxLength = 0;

        for (int end = 0; end < s.size(); end++) {
            char c = s[end];

            if (lastIndex[c] >= start) {
                start = lastIndex[c] + 1;
            }

            lastIndex[c] = end;

            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};
