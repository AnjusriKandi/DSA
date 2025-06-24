class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        string odd = "";
        int maxl = 0;
        for (int i = 0; i < n; i++) {
            string sub = "";
            for (int j = i; j < n; j++) {
                sub += num[j];
                if (((sub[j - i] - '0') % 2 == 1) && ((j - i + 1) > maxl)) {
                    odd = sub;
                    maxl = j - i + 1;
                }
            }
        }
        return odd;
    }
};
